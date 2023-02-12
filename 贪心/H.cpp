#include <bits/stdc++.h>
using namespace std;
int t[105];
int main()
{
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int tm;
        cin >> tm;
        t[0] += tm;
        sort(t, t + m);
    }
    cout << t[m - 1];
    return 0;
}