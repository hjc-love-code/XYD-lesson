#include <bits/stdc++.h>
using namespace std;
long long a[100005] = {0, 1, 2};
int n, k;
const int mod = 1000000007;
int main()
{
    cin >> n >> k;
    for (int i = 3; i <= k; i++)
    {
        a[i] = a[i - 1] * 2 % mod;
    }
    for (int i = k + 1; i <= n; i++)
    {
        for (int j = k; j > 0; j--)
        {
            a[i] = (a[i] + a[i - j]) % mod;
        }
    }
    for (int i = 0; i < n;)
        cout << a[n];
}
