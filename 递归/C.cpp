#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long f(long long n, long long m)
{
    if (n % m == 0)
        return m;
    else
        return f(m, n % m);
}
int main()
{
    cin >> n >> m;
    cout << f(n, m);
    return 0;
}
