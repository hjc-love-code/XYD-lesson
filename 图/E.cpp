#include <iostream>
#include <vector>
using namespace std;

int n, m, s;
int vis[100005];
vector<int> mp[100005];

void dfs(int id)
{
    cout << id << ' ';
    for (int i = 0; i < mp[id].size(); i++)
    {
        if (vis[mp[id][i]] == 0)
        {
            vis[mp[id][i]] = 1;
            dfs(mp[id][i]);
        }
    }
}

int main()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    vis[s] = 1;
    dfs(s);
}
