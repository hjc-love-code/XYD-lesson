#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ans[10] = {1};
int vis[50];
int n, m, cnt = 1;
void dsf(int k)
{
    if (k == n + 1)
    {
        if (cnt == m)
        {
            for (int i = 1; i < k; i++)
            {
                cout << ans[i] << ' ';
            }
        }
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++)
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
