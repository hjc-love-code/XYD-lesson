#include <bits/stdc++.h>
using namespace std;
long long a[1005] = {0, 1, 2, 4};
int n;
int main()
{
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    cout << a[n] % 998244353;
}