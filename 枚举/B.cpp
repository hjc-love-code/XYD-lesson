#include <bits/stdc++.h>
using namespace std;
int n, ans, mini = 999999999;
int main()
{
    cin >> n;
    for (int i = 0; i * i <= n; i++)
    {
        for (int j = 0; j * j <= n - i * i; j++)
        {
            for (int k = 0; k * k <= n - i * i - j * j; k++)
            {
                int l = sqrt(n - i * i - j * j - k * k);
                if (i * i + j * j + k * k + l * l == n)
                {
                    mini = min(mini, i + j + k + l);
                }
            }
        }
    }
    cout << mini;
}