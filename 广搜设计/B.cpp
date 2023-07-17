#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

long long K, M;
int vis[1005];

struct node
{
    string s;
    int num;
};

queue<node> que;

void bfs()
{
    while (que.size())
    {
        node hd = que.front();
        que.pop();
        if (hd.num % M == 0)
        {
            cout << hd.s;
            return;
        }
        for (int i = 0; i <= K - 1; i++)
        {
            long long newnum = hd.num * 10 + i;
            if (!vis[newnum % M])
            {
                vis[newnum % M] = 1;
                que.push({hd.s + to_string(i), newnum % M});
            }
        }
    }
}

int main()
{
    cin >> K >> M;
    for (int i = 1; i < K; i++)
    {
        if (!vis[i % M])
        {
            vis[i % M] = 1;
            que.push({to_string(i), i % M});
        }
    }
    bfs();
}