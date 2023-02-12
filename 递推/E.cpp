#include <bits/stdc++.h>
using namespace std;
long long a[1000];
int main()
{
    int n;
    cin >> n;
    a[1] = 3;
    a[2] = 7;
    for (int i = 3; i <= n; i++)
        a[i] = 2 * a[i - 1] + a[i - 2];
    cout << a[n] << endl;
    return 0;
}