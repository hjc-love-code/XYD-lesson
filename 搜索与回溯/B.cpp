#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, ans[15];
int vis[15];
void dfs(int k)
{
    if (k == n + 1)
    {
        for (int i = 1; i < k; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << endl;
        return;
    }
    for (int i = 1; i <= 9; i++)
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
    cin >> n;
    dfs(1);
}