#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0, mx = 0, t;
        double ans;
        for (int i = 0; i < n; i++)
        {
            cin >> t;
            mx = max(mx, t);
            sum += t;
        }
        int shenyu = sum - mx;
        if (mx >= shenyu)
        {
            ans = shenyu;
        }
        else
        {
            ans = sum * 1.0 / 2;
        }
        printf("%.1lf\n", ans);
    }
}