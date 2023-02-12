#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main()
{
    int n, l, r, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cin >> l >> r;
    if (sum > r * n || sum < l * n)
    {
        cout << -1;
        return 0;
    }
    else
    {
        int b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > r)
            {
                b += a[i] - r;
            }
        }
        cout << b;
    }
}