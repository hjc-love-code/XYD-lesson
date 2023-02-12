#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int vis[50][50];
char mp[50][50];
int n, m, cnt = INT_MAX, A, B, C, D;
void dsf(int x, int y, int step)
{
    if (step >= cnt)
    {
        return;
    }
    if (x == C && y == D)
    {
        cnt = step;
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
            dsf(r, c, step + 1);
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
    cin >> A >> B >> C >> D;
    vis[A][B] = 1;
    dsf(A, B, 0);
    if (cnt == INT_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << cnt;
    }
}
