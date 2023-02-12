#include <bits/stdc++.h>
using namespace std;
long long a[40];

void f(long long n)
{
    if (n == 1)
    {
        cout << 1 << ' ';
        return;
    }
    else
    {
        f(n / 2);
        cout << n << ' ';
        f(n - n / 2);
    }
}
int main()
{
    int n;
    cin >> n;
    f(n);
}
