#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int a[1005], b[1005], c[1005];
int main()
{
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        a[i] = s1[s1.size() - 1 - i] - '0';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        b[i] = s2[s2.size() - 1 - i] - '0';
    }
    int len = max(s1.size(), s2.size()) + 1;
    for (int i = 0; i < len; i++)
    {
        c[i] += a[i] + b[i];
        c[i + 1] += c[i] / 10;
        c[i] %= 10;
    }
    while (c[len - 1] == 0 && len - 1 > 0)
    {
        len--;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        cout << c[i];
    }
    return 0;
}