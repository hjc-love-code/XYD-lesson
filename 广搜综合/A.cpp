#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int f[15], s[15];
int n, minans = INT_MAX;

void dfs(int id, int sum_f, int sum_s)
{
    if (abs(sum_f - sum_s) <= minans && sum_f + sum_s)
    {
        minans = abs(sum_f - sum_s);
    }
    if (id > n)
    {
        return;
    }
    dfs(id + 1, sum_f + f[id], sum_s + s[id]);
    dfs(id + 1, sum_f, sum_s);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i] >> s[i];
    }
    dfs(1, 0, 0);
    cout << minans;
}