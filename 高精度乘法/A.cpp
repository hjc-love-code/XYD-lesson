#include <bits/stdc++.h>
using namespace std;
int n, m, num;
string s, ans;
int main()
{
    cin >> n >> s >> m;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            num = num * n + s[i] - '0';
        }
        else
            num = num * n + s[i] - 'A' + 10;
    }
    while (num)
    {
        if (num % m < 10)
        {
            ans += num % m + '0';
        }
        else
            ans += num % m - 10 + 'A';
        num /= m;
    }
    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}