#include <bits/stdc++.h>
using namespace std;
int n, m, vis[505][505], mp[505][505], cnt;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
struct node
{
    int x, y;
} a[250005]; // 记录选手必须要进过的点
void bfs(int ans);
int check();
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            int x;
            cin >> x;
            if (x) // 选手要经过的点
            {
                cnt++;
                a[cnt].x = i;
                a[cnt].y = j;
            }
        }
    int l = 0, r = 1e9, mid;
    while (l < r)
    {
        mid = ;
        bfs(mid);
        if (check())
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
}
void bfs(int ans)
{
    queue<node> que;
    memset();
    // 起点在哪？选手必须经过的点（推荐第一个或最后一个）
    vis[a[1].x][a[1].y] = 1;
    que.push({a[1].x, a[1].y});
    while ()
    {
        node hd = ;
        que.pop();
        for () // 4个方向
        {
            int r = ;
            int c = ;
            if () // 出界、标记
                continue;
            if (abs(mp[r][c] - mp[hd.x][hd.y]) > ans) // 高度差超出
                continue;                             // 超出难度系数（D）
            vis[][] = ;
            que.push();
        }
    }
}
int check()
{
    for ()    // 所有选手能到的点
        if () // 选手能到的点未标记为1(有点不能到达)
            return 0;
    return 1; // 循环结束，所有点都标记（都能到达）
}