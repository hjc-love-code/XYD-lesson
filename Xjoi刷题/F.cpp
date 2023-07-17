#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int n, q;
int num[10005];

void dfs(int l) {
    if ()
}
int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }
    for (int i = 1; i <= q; i++)
    {
        int m;
        cin >> m;
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (num[mid] == m)
            {
                r = mid;
            }
            else if (num[mid] < m)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (num[l] != m)
        {
            cout << n + 1 << '\n';
        }
        else
        {
            cout << l << '\n';
        }
    }
}
