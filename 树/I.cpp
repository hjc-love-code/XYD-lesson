#include <iostream>
using namespace std;

int n, ans;
int vis[1005];
int cnt[1005];
char tre[1005][1005];

int dfs(int id, int dep)
{
    cnt[dep]++;
    for (int i = 1; i <= n; i++)
    {
        if (tre[id][i] != '1' || vis[i] == 1)
        {
            continue;
        }
        vis[i] = 1;
        dfs(i, dep + 1);
    }
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
    for (int i = 1; i <= n; i++) {
        ans = max(ans, cnt[i]);
    }
    cout << ans;
}