#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int vis[1005][1005];
char mp[1005][1005];
long long n, m;
long long A, B, C, D;

struct node
{
    long long x;
    long long y;
    long long step;
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
            long long r = hd.x + dx[i];
            long long c = hd.y + dy[i];
            long long step = hd.step + 1;
            if (mp[r][c] == 'G')
            {
                step++;
            }
            if (r <= 0 || r > n || c <= 0 || c > m || mp[r][c] == '#')
            {
                continue;
            }
            if (vis[r][c] != -1 && step >= vis[r][c])
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
    cin >> n >> m;
    memset(vis, -1, sizeof(vis));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mp[i][j] == '@')
            {
                A = i;
                B = j;
            }
            if (mp[i][j] == 'M')
            {
                C = i;
                D = j;
            }
        }
    }
    node newstruct = {A, B, 0};
    que.push(newstruct);
    bfs();
    if (vis[C][D] == -1)
    {
        cout << "You can't save Mengxin";
    }
    else
    {
        cout << vis[C][D];
    }
}