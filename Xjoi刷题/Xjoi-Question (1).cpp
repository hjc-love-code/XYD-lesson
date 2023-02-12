#include <bits/stdc++.h>
#include <iostream>
using namespace std;

char a[1005];
long long ans;
string rep[1005];

int main()
{
    cin >> rep[0];
    int dif = (6 - rep[0].size());
    for (int j = 0; j < dif; j++)
    {
        a[j] = 0;
    }
    for (int j = dif; j < 6; j++)
    {
        a[j] = rep[0][j - dif];
    }
    int flag = 1, i = 1;
    while (flag == 1)
    {
        int mid = (a[2] - '0') * 100 + (a[3] - '0') * 10 + a[4] - '0';
        rep[i] = to_string(mid * mid);
        int dif = (6 - rep[i].size());
        if (mid == 0)
        {
            cout << ans + 2;
            flag = 0;
            return 0;
        }
        for (int j = 0; j < dif; j++)
        {
            a[j] = '0';
        }
        for (int j = dif; j < 6; j++)
        {
            a[j] = rep[i][j - dif];
        }
        for (int j = 0; j < i; j++)
        {
            if (rep[j] == rep[i])
            {
                cout << ans + 1;
                flag = 0;
            }
        }
        ans++;
        i++;
    }
}
