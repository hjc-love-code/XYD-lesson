#include <bits/stdc++.h>
using namespace std;
int n, ans, v, t, i;
int main()
{
    while (scanf("%d", &n) && n)
    {
        ans = 1e9;
        for (i = 1; i <= n; i++)
        {
            scanf("%d%d", &v, &t);
            if (t >= 0)
            {
                int cur = ceil(t + 4.5 / v * 3600);
                ans = min(ans, cur);
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}