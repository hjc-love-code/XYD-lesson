#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n;
int ans[105];
#include <iostream>
using namespace std;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int vis[10][10];
char mp[10][10];
int n, m, cnt;
void dsf(int x, int y)
{
    if (x == n && y == m)
    {
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int r = x + dx[i];
        int c = y + dy[i];
        if (mp[r][c] == '#' || r < 1 || r > n || c < 1 || c > m || vis[r][c] == 1)
        {
            continue;
        }
        else
        {
            vis[r][c] = 1;
            dsf(r, c);
            vis[r][c] = 0;
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
        }
    }
    vis[1][1] = 1;
    dsf(1, 1);
    cout << cnt;
}

int vis[105];
void dfs(int k)
{
    if (k == n + 1)
    {
        for (int i = 1; i < k; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            ans[k] = i;
            dfs(k + 1);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin >> n;
    dfs(1);
}
