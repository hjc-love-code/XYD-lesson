#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, m, cnt;
int ans[105];
int vis[105];
void dfs(int k)
{
    if (k == m + 1)
    {
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            ans[k] = i;
            dfs(k + 1);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin >> n >> m;
    dfs(1);
    cout << cnt;
}
