
#include <bits/stdc++.h>
using namespace std;
long long a[1005], n;
int main()
{
    cin >> n;
    a[1] = 2;
    int add = 2;
    for (int i = 2; i <= n; i++)
    {
        a[i] = a[i - 1] + add;
        add += 1;
    }
    cout << a[n];
}