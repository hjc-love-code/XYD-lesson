#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int n, m, s;
int vis[100005];
int ans = 0;
vector<int> mp[100005];
queue<int> que;

void bfs()
{
    while (que.size())
    {
        int hd = que.front();
        que.pop();
        ans = max(ans, hd);
        for (int i = 0; i < mp[hd].size(); i++)
        {
            if (vis[mp[hd][i]] == 0)
            {
                vis[mp[hd][i]] = 1;
                que.push(mp[hd][i]);
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    c for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        ans = 0;
        memeset(vis, 1, sizeof(vis))
            memset(vis, 0, sizeof(vis));
        vis[i] = 1;
        que.push(i);
        bfs();
        cout << ans << ' ';
        bfs();
    }
}