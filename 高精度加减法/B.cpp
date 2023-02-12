#include <bits/stdc++.h>
using namespace std;
int maxi, n, maxlen;
string s[25], maxs;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    maxs = s[1];
    maxlen = s[1].size();
    maxi = 1;
    for (int i = 2; i <= n; i++)
    {
        if (maxlen < s[i].size())
        {
            maxs = s[i];
            maxlen = s[i].size();
            maxi = i;
        }
        else if (maxlen == s[i].size() && s[i] > maxs)
        {
            maxs = s[i];
            maxlen = s[i].size();
            maxi = i;
        }
    }
    cout << maxi << endl;
    cout << maxs;
}