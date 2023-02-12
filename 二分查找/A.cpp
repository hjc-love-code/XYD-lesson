#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, m;
int num[1000005];
int main()
{
    cin >> n >> m;
    int l = 1;
    int r = n;
    for (int i = 1; i < n; i++)
    {
        cin >> num[i];
    }
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
        cout << 0;
    }
    else
    {
        cout << l;
    }
}