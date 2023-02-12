#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n, cnt;
void dsf(int k, int sum)
{
    if (k == n + 1)
    {
        if (sum == n)
        {
            cnt++;
        }
        return;
    }
    for (int i = 0; i <= 1; i++)
    {
        dsf(k + 1, sum + k * i);
    }
}
int main()
{
    cin >> n;
    dsf(1, 0);
    cout << cnt;
}