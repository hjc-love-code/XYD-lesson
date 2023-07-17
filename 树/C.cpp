#include <iostream>
#include <algorithm>
using namespace std;

int n, ans = 0, total;
int vis[1005];
char tre[1005][1005];

void dfs(int id, int sum)
{
    for (int i = 1; i <= n; i++)
    {
        if (tre[id][i] == '0' || vis[i] == 1)
        {
            continue;
        }
        vis[i] = 1;
        dfs(i, sum + 1);
        vis[i] = 0;
    }
    ans = max(ans, sum); 
    return;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> tre[i][j];
        }
    }
    vis[1] = 1;
    dfs(1, 0);
    cout << ans;
}