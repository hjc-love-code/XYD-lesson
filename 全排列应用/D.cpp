#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ans[10];
int vis[50];
int n;
void dsf(int k)
{
    if (k == n + 1)
    {
        for (int i = 1; i < k; i++)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && k != i)
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
    cin >> n;
    dsf(1);
}
