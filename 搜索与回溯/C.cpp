#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int ans[10] = {1};
int n, m, cnt;
void dsf(int k, int sum)
{
    if (k == m + 1)
    {
        if (!sum)
        {
            cnt++;
        }
        return;
    }
    for (int i = ans[k - 1]; i <= sum; i++)
    {
        ans[k] = i;
        dsf(k + 1, sum - i);
    }
}
int main()
{
    cin >> n >> m;
    dsf(1, n);
    cout << cnt;
}