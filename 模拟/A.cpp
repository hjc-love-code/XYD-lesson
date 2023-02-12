#include <bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
    cin >> n;
    for (int i = 0; i <= n / 5; i++)
    {
        if ((n - 7 * i) >= 0 && (n - 7 * i) % 4 == 0)
        {
            ans++;
        }
    }
    cout << ans;
}