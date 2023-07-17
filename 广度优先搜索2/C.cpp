#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int vis[1005][1005];
char mp[1005][1005];
int n, m, ans;

struct node
{
    int x;
    int y;
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
            if (r <= 0 || r > n || c <= 0 || c > m || vis[r][c] == 1 || mp[r][c] == '.')
            {
                continue;
            }
            else
            {
                vis[r][c] = 1;
                node newstruct = {r, c};
                que.push(newstruct);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
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
            int check = 0;
            if (mp[i][j] == '#')
            {
                check += 1;
            }
            if (mp[i + 1][j] == '#')
            {
                check += 1;
            }
            if (mp[i][j + 1] == '#')
            {
                check += 1;
            }
            if (mp[i + 1][j + 1] == '#')
            {
                check += 1;
            }
            if (check == 3)
            {
                cout << "Bad placement.";
                return 0;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mp[i][j] == '#' && vis[i][j] == 0)
            {
                node newstruct = {i, j};
                que.push(newstruct);
                vis[i][j] = 1;
                ans++;
                bfs();
            }
        }
    }
    cout << "There are " << ans << " ships.";
    return 0;
}