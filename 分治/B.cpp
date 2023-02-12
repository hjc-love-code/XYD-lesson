#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long a[1005][1005] = {0};
void f(long long x, long long y, long long n)
{
    if (n == 1)
    {
        a[x + 1][y] = 1;
        a[x][y + 1] = 1;
        a[x + 1][y + 1] = 1;
        return;
    }
    else
    {
        f(x + pow(2, n - 1), y, n - 1);
        f(x, y + pow(2, n - 1), n - 1);
        f(x + pow(2, n - 1), y + pow(2, n - 1), n - 1);
    }
}
int main()
{
    long long n;
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