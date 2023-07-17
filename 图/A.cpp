#include <iostream>
#include <queue>
using namespace std;

int n, m;
char mp[505][505];
int vis[505][505];
int dx[] = {2, -2, 0, 0, 1, -1, 0, 0};
int dy[] = {0, 0, 2, -2, 0, 0, -1, 1};
int a, b, c, d;

struct node
{
    int x;
    int y;
    int step;
};


queue<node> que;

void bfs() {
    while (que.size()) {
        node hd = que.front();
        que.pop();
        if (hd.x == c && hd.y == d) {
            cout << hd.step;
            return;
        }
        for (int i = 0; i < 4; i++) {
            int r = hd.x + dx[i];
            int c = hd.y + dy[i];
            int step = hd.step + 1;
            if (r < 1 || r > n || c < 1 || c > m || vis[r][c] == 1 || mp[r][c] == '1') {
                continue;
            }
            node newstruct = {r, c, step};
            vis[r][c] = 1;
            que.push(newstruct);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    cin >> a >> b >> c >> d;
    node newstruct = {a, b, 0};
    vis[a][b] = 1;
    que.push(newstruct);
    bfs();
}