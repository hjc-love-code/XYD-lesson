#include <iostream>
#include <queue>
using namespace std;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int n, m, sx, sy;
int mp[500][500];

struct node
{
    int x;
    int y;
    int step;
};

void bfs()
{
    queue<node> que;
    bool vis[500][500] = {0};
    node newstruct = {sx, sy, 0};
    que.push(newstruct);
    vis[sx][sy] = true;
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        for (int i = 0; i < 8; i++)
        {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r <= 0 || r > n || c <= 0 || c > m || vis[r][c] == true)
            {
                continue;
            }
            else
            {
                vis[r][c] = true;
                mp[r][c] = step + 1;
                node newstruct = {r, c, step};
                que.push(newstruct);
            }
        }
    }
}

int main()
{

    scanf("%d %d %d %d", &n, &m, &sx, &sy);
    mp[sx][sy] = 1;
    bfs();
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << mp[i][j] - 1 << ' ';
        }
        cout << '\n';
    }
}