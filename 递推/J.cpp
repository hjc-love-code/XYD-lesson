#include <bits/stdc++.h>
using namespace std;
int a[1000005] = {1, 1, 2};
int n;
int main()
{
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            a[i] = a[i - 1];
        }
        else
        {
            a[i] = a[i / 2] + a[i - 1];
        }
    }
    cout << a[n];
}