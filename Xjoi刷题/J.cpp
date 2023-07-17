#include <bits/stdc++.h>
using namespace std;

int n, x;
int lose[1005], win[1005], use[1005];
long long dp[1005];
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> lose[i] >> win[i] >> use[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= 0; j--)
        {
            if (j >= use[i]) dp[j] = max(dp[j] + lose[i], dp[j - use[i]] + win[i]);
            else
                dp[j] += lose[i];
        }
    }
    printf("%lld", 5 * dp[x]);
}