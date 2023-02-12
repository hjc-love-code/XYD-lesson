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
#include <bits/stdc++.h>
    using namespace std;
    struct node
    {
        int p, t;
    } sub[100005];
    int n, cnt, ans;
    int main()
    {
        cin >> n;
        while (n--)
        {
            int op, p, t;
            scanf("%d %d %d", &op, &p, &t);
            if (op == 0)
            {
                sub[cnt].p = p;
                sub[cnt].t = t + 45;
                ans += p;
                cnt++;
            }
            else
            {
                int flag = 1;
                for (int i = max(0, cnt - 45); i < cnt; i++)
                {
                    if (sub[i].p >= p && t <= sub[i].t)
                    {
                        sub[i].p = 0;
                        sub[i].t = 0;
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                {
                    ans += p;
                }
            }
        }
        printf("%d", ans);
    }
    cout << ans;
}