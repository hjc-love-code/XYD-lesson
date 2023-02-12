#include <bits/stdc++.h>
using namespace std;
int a[45] = {0, 1, 2};
int n;
int main()
{
    cin >> n;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
}