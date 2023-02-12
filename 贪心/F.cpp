#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    int less[n], money[n];
    for (int i = 0; i < n; i++)
    {
        cin >> less[i] >> money[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (money[j] > money[j + 1])
            {
                swap(money[j], money[j + 1]);
                swap(less[j], less[j + 1]);
            }
        }
    }
    int sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < less[i]; j++)
        {
            if (money[i] <= s)
            {
                sum += 1;
                s -= money[i];
            }
            else
            {
                cout << sum;
                return 0;
            }
            sum2 += 1;
        }
    }
    cout << sum2;
}