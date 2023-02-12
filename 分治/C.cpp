#include <bits/stdc++.h>
#include <iostream>
using namespace std;
char a[1005][1005];
void box(int x, int y, int n)
{
    if (n == 1)
    {
        a[x][y] = 'x';
        return;
    }
    else
    {
        int len = pow(3, n - 2);
        box(x, y, n - 1);
        box(x + 2 * len, y, n - 1);
        box(x + len, y + len, n - 1);
        box(x + 2 * len, y + 2 * len, n - 1);
        box(x, y + 2 * len, n - 1);
    }
}
int main()
{
    long long n;
    cin >> n;
    memset(a, ' ', sizeof(a));
    box(1, 1, n);
    for (int i = 1; i <= pow(3, n - 1); i++)
    {
        for (int j = 1; j <= pow(3, n); j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}