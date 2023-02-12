#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max;
    cin >> n >> max;
    int list[n];
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (list[i] + list[i + 1] > max)
        {
            int less = (list[i] + list[i + 1]) - max;
            if (less > list[i + 1])
            {
                list[i + 1] = 0;
                list[i] = less - list[i + 1];
                sum += less;
            }
            else
            {
                sum += less;
                list[i + 1] -= less;
            }
        }
    }
    cout << sum;
}