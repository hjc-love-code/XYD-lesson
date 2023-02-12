#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ans[10] = {1};
int vis[50];
int n, m, cnt;
void dsf(int k)
{
    if (k == m + 1)
    {
        for (int i = 1; i <= m; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = ans[k - 1]; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            ans[k] = i;
            dsf(k + 1);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin >> n >> m;
    dsf(1);
}
