#include <iostream>
#include <vector>
using namespace std;

int n, m, ans;
vector<int> tre[10000];
vector<int> grh[10000];

bool findbranch(int notex, int notey)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < tre[i].size(); j++)
            if (i == notex && tre[i][j] == notey)
                return true;
    return false;
}

bool ifimpossible(int notex, int notey)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < grh[i].size(); j++)
            if (i == notex && grh[i][j] == notey)
                return true;
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        tre[x].push_back(y);
    }
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        grh[x].push_back(y);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < tre[i].size(); j++)
        {
            if (!ifimpossible(i, tre[i][j]))
            {
                cout << "impossible";
                return 0;
            }
        }
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < grh[i].size(); j++)
            if (!findbranch(i, grh[i][j]))
                ans++;
    cout << ans;
}