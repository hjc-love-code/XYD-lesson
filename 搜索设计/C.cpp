#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int n, m, cnt = 0, mx = 0;
int gx[4] = {-1, 1, 0, 0};
int gy[4] = {0, 0, -1, 1};
char mp[60][60];
int vis[60][60];

void dfs(int x, int y)
{
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + gx[i];
        int ny = y + gy[i];
        if (nx < 1 || nx > n || ny < 1 || ny > m || vis[nx][ny] == 1 || mp[nx][ny] == 'W')
        {
            continue;
        }
        else
        {
            // cout << "next pos:" << nx << ' ' << ny << '\n';
            vis[nx][ny] = 1;
            dfs(nx, ny);
        }
    }
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        string a;
        cin >> a;
        for (int j = 0; j < m; j++)
        {
            mp[i][j + 1] = a[j] - '0';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mp[i][j] == 1)
            {
                vis[i][j] = 1;
                cnt = 0;
                dfs(i, j);
                mx = max(mx, cnt);
            }
        }
    }
    cout << mx;
}