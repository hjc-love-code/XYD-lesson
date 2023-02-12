#include <bits/stdc++.h>
using namespace std;
int s[10000] = {1};
int n, len = 1, x, ans;
int main()
{
    cin >> n >> x;
    for (int k = 1; k <= n; k++)
    {
        for (int i = 0; i < len; i++)
        {
            s[i] *= k;
        }
        for (int i = 0; i < len; i++)
        {
            s[i + 1] += s[i] / 10;
            s[i] %= 10;
            if (s[len])
            {
                len++;
            }
        }
    }
    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] == x)
        {
            ans++;
        }
    }
    cout << ans;
}