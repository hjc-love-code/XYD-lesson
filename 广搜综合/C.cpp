#include <bits/stdc++.h>
#include <queue>
#include <iostream>
using namespace std;

queue<int> que;
int vis[100005];
int n, k;

void bfs()
{
    vis[n] = 0;
    que.push(n);
    while (que.size())
    {
        int hd = que.front();
        que.pop();
        if (hd == k)
        {
            cout << vis[k];
        }
        if (hd - 1 >= 0 && vis[hd - 1] == -1)
        {
            vis[hd - 1] = vis[hd] + 1;
            que.push(hd - 1);
        }
        if (hd + 1 <= 100000 && vis[hd + 1] == -1)
        {
            vis[hd + 1] = vis[hd] + 1;
            que.push(hd + 1);
        }
        if (hd * 2 <= 100000 && vis[hd * 2] == -1)
        {
            vis[hd * 2] = vis[hd] + 1;
            que.push(hd * 2);
        }
    }
}

int main()
{
    cin >> n >> k;
    memset(vis, -1, sizeof vis);
    bfs();
    return 0;
}
