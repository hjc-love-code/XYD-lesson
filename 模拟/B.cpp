#include <bits/stdc++.h>
using namespace std;
int n, m, k, t;
struct node
{
    int x;
    int y;
    int cnt;
} mp[1005], dd;
bool cmp(node x, node y)
{
    return x.cnt > y.cnt;
}
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int cnt;
            cin >> cnt;
            if (cnt)
            {
                mp[t].x = i;
                mp[t].y = j;
                mp[t].cnt = cnt;
                t++;
            }
        }
    }
    sort(mp, mp + t, cmp);
    k -= 1;
    for (int i = 0; i < t; i++)
    {
        if (!i)
        {
            if (k > mp[i].x * 2)
            {
                k -= mp[i].x;
                dd.x = mp[i].x;
                dd.y = mp[i].y;
                dd.cnt = mp[i].cnt;
            }
            else
            {
                break;
            }
        }
        else
        {
            if (k - abs(dd.x - mp[i].x) - abs(dd.y - mp[i].y) > mp[i].x)
            {
                k = k - abs(dd.x - mp[i].x) - abs(dd.y - mp[i].y) - 1;
                dd.x = mp[i].x;
                dd.y = mp[i].y;
                dd.cnt += mp[i].cnt;
            }
            else
            {
                break;
            }
        }
    }
    cout << dd.cnt;
}