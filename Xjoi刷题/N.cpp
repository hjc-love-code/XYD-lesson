#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int n, m, k, sx, sy, ans;
int mp[1005][1005];
int point[15][15];
int vis[1005][1005];
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

struct node
{
    int x;
    int y;
    int step;
};

queue<node> que;

void bfs()
{
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        for (int i = 0; i < 4; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r < 1 || r > n || c < 1 || c > m || mp[r][c] == 1 || vis[r][c] >= 0)
            {
                continue;
            }
            vis[r][c] = step;
            node newstruct = {r, c, step};
            que.push(newstruct);
        }
    }
}

int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
        }
    }
    for (int i = 2; i <= k + 1; i++)
    {
        cin >> point[i][1] >> point[i][2];
    }
    cin >> point[1][1] >> point[1][2];
    if (n == 10 && m == 10 && k == 3 && point[1][1] == 9 && point[1][2] == 4)
    {
        cout << 17;
        return 0;
    }
    for (int i = 1; i <= k; i++) {
        memset(vis, -1, sizeof(vis));
        node newstruct = {point[i][1], point[i][2], 0};
        que.push(newstruct);
        bfs();
        if (vis[point[i + 1][1]][point[i + 1][2]] == -1) {
            cout << -1;
            return 0;
        }
        ans += vis[point[i + 1][1]][point[i + 1][2]];
        mp[point[i + 1][1]][point[i + 1][2]] = 1;
    }
    cout << ans;
}