#include <bits/stdc++.h>
using namespace std;
long long f(long long n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return f(n - 1) * n % 998244353;
    }
}
int main()
{
    long long n;
    cin >> n;
    cout << f(n);
}