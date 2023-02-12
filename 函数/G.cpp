#include <bits/stdc++.h>
using namespace std;
int get_max(int a[105], int n)
{
    int mx = a[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
    }
    return mx;
}
int get_min(int a[105], int n)
{
    int mi = a[0];
    for (int i = 0; i < n; i++)
    {
        mi = min(mi, a[i]);
    }
    return mi;
}
int main()
{
    int a[105];
    int n, m = 3;
    while (m--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << get_max(a, n) << ' ' << get_min(a, n) << endl;
    }
}