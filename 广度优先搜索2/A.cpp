#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int vis[505][505];
int n, m, a, b;

struct node
{
    int x;
    int y;
    int step;
} ms[100000];

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
            if (r <= 0 || r > n || c <= 0 || c > m || vis[r][c] >= 0)
            {
                continue;
            }
            else
            {
                vis[r][c] = step;
                node newstruct = {r, c, step};
                que.push(newstruct);
            }
        }
    }
}

int main()
{
    memset(vis, -1, sizeof(vis));
    cin >> n >> m >> a >> b;
    for (int i = 1; i <= a; i++)
    {
        int x, y;
        cin >> x >> y;
        vis[x][y] = 0;
        node newstruct = {x, y, 0};
        que.push(newstruct);
    }
    for (int i = 1; i <= b; i++)
    {
        cin >> ms[i].x >> ms[i].y;
    }
    bfs();
    for (int i = 1; i <= b; i++)
    {
        cout << vis[ms[i].x][ms[i].y] << '\n';
    }
}