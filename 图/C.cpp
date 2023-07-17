#include <iostream>
#include <vector>
using namespace std;

vector<int> mp[1000000];
int n, m;

int main()
{
    scanf("%d %d", &n, &m);
    while (m--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", mp[i].size());
    }
}