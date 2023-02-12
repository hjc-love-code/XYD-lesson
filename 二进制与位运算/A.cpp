#include <iostream>
#include <math.h>
using namespace std;
int n, m, cnt;
int num[25];
int ans[25] = {1};
int vis[25];
bool check(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void dsf(int k, int sum)
{
    if (k == m + 1)
    {
        if (check(sum))
        {
            cnt++;
        }
    }
    else
    {
        for (int i = ans[k - 1]; i <= n; i++)
        {
            if (!vis[i])
            {
                vis[i] = 1;
                ans[k] = i;
                dsf(k + 1, sum + num[i]);
                vis[i] = 0;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> num[i];
    }
    dsf(1, 0);
    cout << cnt;
    return 0;
}
