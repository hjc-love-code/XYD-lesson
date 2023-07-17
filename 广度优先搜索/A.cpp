#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, ans, vis[1000][1000];
int A, B, C, D;

struct node
{
    int x;
    int y;
    int step;
};

queue<node> que;

void bfs()
{
    vis[A][B] = 1;
    // node newstruct = {A, B, 0};
    que.push({A, B, 0});
    while (!que.empty())
    {
        node hd = que.front();
        que.pop();
        if (hd.x == C && hd.y == D)
        {
            cout << hd.step;
            return;
        }
        for (int i = 0; i < 8; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r < 0 || r >= n || c < 0 || c >= n || vis[r][c])
            {
                continue;
            }
            else
            {
                vis[r][c] = 1;
                // node newstruct = {r, c, step};
                que.push({r, c, step});
            }
        }
    }
}

int main()
{
    cin >> n;
    cin >> A >> B;
    cin >> C >> D;
    bfs();
}