#include <bits/stdc++.h>
using namespace std;
int x[5005], y[5005];
int main()
{
    int apple_n, power_s, chair_a, hand_b;
    cin >> apple_n >> power_s;
    cin >> chair_a >> hand_b;
    for (int i = 0; i < apple_n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < apple_n; i++)
    {
        for (int j = 0; j < apple_n - 1; j++)
        {
            if (y[j] > y[j + 1])
            {
                swap(y[j], y[j + 1]);
                swap(x[j], x[j + 1]);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < apple_n; i++)
    {
        if (x[i] <= (chair_a + hand_b))
        {
            if (power_s > y[i])
            {
                power_s -= y[i];
                sum += 1;
            }
            else
            {
                break;
            }
        }
    }
    cout << sum;
}