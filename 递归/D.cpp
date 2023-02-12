#include <bits/stdc++.h>
using namespace std;
long long a[40];

long long f(long long x)
{
    if (x <= 3)
    {
        return 1;
    }
    else
    {
        return f(x - 1) + 2 * f(x - 3);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}