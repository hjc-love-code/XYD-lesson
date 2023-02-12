#include <bits/stdc++.h>
using namespace std;
long long a[1005], n;
int main()
{
    cin >> n;
    a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] * 2 + 1;
    }
    cout << a[n];
}
