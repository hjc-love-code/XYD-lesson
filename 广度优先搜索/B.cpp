#include <queue>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m, minans = INT_MAX;
int kfc1[205][205], kfc2[205][205];
char mp[205][205];
struct node
{
    int x, y, step;
};
void bfs(int x, int y, int vis[205][205])
{
    queue<node> que;
    node newstruct = {x, y, 0};
    que.push(newstruct);
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r < 1 || c < 1 || r > n || c > m || vis[r][c] || mp[r][c] == '#')
                continue;
            vis[r][c] = step;
            node newstruct = {r, c, step};
            que.push(newstruct);
        }
    }
}

int main()
{
    int x, y, x1, y1;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] == '@')
            {
                x = i;
                y = j;
            }
            if (mp[i][j] == '&')
            {
                x1 = i;
                y1 = j;
            }
        }
    bfs(x, y, kfc1);
    bfs(x1, y1, kfc2);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (mp[i][j] == 'F' && kfc1[i][j] && kfc2[i][j])
            {
                minans = min(kfc1[i][j] + kfc2[i][j], minans);
            }
        }

    if (minans == INT_MAX)
        cout << "Meeting cancelled";
    else
        cout << minans;
}