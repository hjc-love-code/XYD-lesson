#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <algorithm>
using namespace std;
int n, m, cnt = INT_MAX;
int num[25][25];
int vis[25];
void dsf(int k, int mn)
{
    if (mn >= cnt)
    {
        return;
    }
    if (k == n + 1)
    {
        cnt = mn;
    }
    else
    {
        int mn2 = 1;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 0)
            {
                vis[i] = 1;
                dsf(k + 1, mn + num[k][i]);
                vis[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> num[i][j];
        }
    }
    dsf(1, 0);
    cout << cnt;
    return 0;
}
