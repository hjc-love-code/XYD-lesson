#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long a[1500][1500];
long long n;
void f(long long x, long long y, long long n)
{
    long long len = pow(2, n - 1);
    if (n == 0)
    {
        return;
    }
    if (a[x][y] == 1)
    {
        a[x][y] = 1;
        a[x + len][y] = 1;
        a[x][y + len] = 1;
        a[x + len][y + len] = 2;
    }
    else
    {
        a[x][y] = 2;
        a[x + len][y] = 2;
        a[x][y + len] = 2;
        a[x + len][y + len] = 1;
    }
    f(x, y, n - 1);
    f(x + len, y, n - 1);
    f(x, y + len, n - 1);
    f(x + len, y + len, n - 1);
}
int main()
{
    a[1][1] = 1;
    cin >> n;
    f(1, 1, n);
    for (int i = 1; i <= pow(2, n); i++)
    {
        for (int j = 1; j <= pow(2, n); j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
