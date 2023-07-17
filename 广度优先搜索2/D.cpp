#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int drcx[] = {-1, 1, 0, 0};
int drcy[] = {0, 0, -1, 1};
int vis[1005][1005];
int mp[1005][1005];
int n, m;
int A, B, C, D;

struct node
{
    int x;
    int y;
    int step;
    int turn;
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
            int step = hd.step;
            if (r <= 0 || r > n || c <= 0 || c > m || mp[r][c] == 1 || vis[r][c] != -1)
            {
                continue;
            }
            if (hd.turn != 4 && hd.turn != i)
            {
                step++;
            }
            vis[r][c] = step;
            node newstruct = {r, c, step, i};
            que.push(newstruct);
        }
    }
}

int main()
{
    cin >> n >> m;
    memset(vis, -1, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
        }
    }
    cin >> A >> B >> C >> D;
    node newstruct = {A, B, 0, 4};
    que.push(newstruct);
    vis[A][B] = 0;
    bfs();
    cout << vis[C][D];
}