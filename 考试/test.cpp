#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, ans1 = INT_MAX, ans2 = INT_MAX;
int vis[105][105];
char mp[105][105];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

struct node
{
    int x, y, step;
};

queue<node> que;

void bfs()
{
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        if (mp[hd.x][hd.y] == 'Q')
        {
            ans1 = min(ans1, hd.step);
        }
        for (int i = 0; i < 4; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r <= 0 || r > n || c <= 0 || c > m || vis[r][c] != -1 || mp[r][c] == '#')
            {
                continue;
            }
            vis[r][c] = step;
            node newstruct = {r, c, step};
            que.push(newstruct);
        }
    }
}

void bfs2()
{
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        if (mp[hd.x][hd.y] == 'H')
        {
            ans2 = min(ans2, hd.step);
        }
        for (int i = 0; i < 4; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r <= 0 || r > n || c <= 0 || c > m || vis[r][c] != -1 || mp[r][c] == '#')
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
    int yx, yy, hx, hy, nx, ny;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] == 'Y')
            {
                yx = i;
                yy = j;
            }
            if (mp[i][j] == 'H')
            {
                hx = i;
                hy = j;
            }
            if (mp[i][j] == 'Q')
            {
                nx = i;
                ny = j;
            }
        }
    }
    vis[yx][yy] = 0;
    memset(vis, -1, sizeof vis);
    node newstruct = {yx, yy, 0};
    que.push(newstruct);
    bfs();
    memset(vis, -1, sizeof vis);
    node newstruct2 = {nx, ny, 0};
    que.push(newstruct2);
    bfs2();
    if (ans1 == INT_MAX || ans2 == INT_MAX) {
        cout << "no way";
    }
    else {
        cout << ans1 + ans2;
    }
    
}