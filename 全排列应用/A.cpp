#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, ans[100];
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
    for (int i = 1; i <= n; i++)
    {
        ans[k] = i;
        dfs(k + 1);
    }
}
int main()
{
    cin >> n;
    dfs(1);
}