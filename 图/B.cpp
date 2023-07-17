#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

vector<int> mp[1000005];
int n, m;
int cnt1, cnt2, cnt3;

int main()
{
    cin >> n >> m;
    while (m--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (mp[i].size() == 1)
        {
            cnt1++;
        }
        else if (mp[i].size() == 2)
        {
            cnt2++;
        }
        else if (mp[i].size() == n - 1)
        {
            cnt3++;
        }
    }
    if (cnt2 == n)
        cout << "Ring";
    else if (cnt3 == 1 && cnt1 == n - 1)
        cout << "Flower";
    else if (cnt1 == 2 && cnt2 == n - 2)
        cout << "Chain";
    else
    {
        cout << "Neither";
    }
}