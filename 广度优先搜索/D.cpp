#include <iostream>
#include <queue>
using namespace std;

int n, st, ed;
int lst[200];
int updown[2] = {0, 2};
bool vis[200];

struct node
{
    int floor;
    int step;
};

queue<node> que;

void bfs()
{

    node newstruct = {st, 0};
    que.push(newstruct);
    vis[st] = true;
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        if (hd.floor == ed)
        {
            cout << hd.step;
            return;
        }
        for (int i = 0; i < 2; i++)
        {
            int r = hd.floor + lst[hd.floor] - updown[i] * lst[hd.floor];
            int step = hd.step + 1;
            if (r <= 0 || r > n || vis[r])
            {
                continue;
            }
            else
            {
                vis[r] = 1;
                node newstruct = {r, step};
                que.push(newstruct);
            }
        }
    }
    cout << -1;
}

int main()
{
    cin >> n >> st >> ed;
    for (int i = 1; i <= n; i++)
    {
        cin >> lst[i];
    }
    bfs();
}