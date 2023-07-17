#include <vector>
#include <iostream>
using namespace std;

vector<int> tre[100005];
int n;
int vis[100005];
int fa[100005];

void dfs(int id)
{
    for (int i = 0; i < tre[id].size(); i++)
    {
        int sn = tre[id][i];
        if (!vis[sn])
        {
            vis[sn] = 1;
            fa[sn] = id;
            dfs(sn);
        }
    }
    return;
}

int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        tre[x].push_back(y);
        tre[y].push_back(x);
    }
    dfs(1);
    for (int i = 1; i < n; i++)
    {
        cout << fa[i + 1] << '\n';
    }
}