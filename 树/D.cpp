#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int n;
int tre[205];

struct node {
    int x;
    int y
}

void dfs(int id)
{
    if (tre[id * 2] > 0)
    {
        dfs(tre[id * 2]);
    }
    if (tre[id * 2 + 1] > 0)
    {
        dfs(tre[id * 2 + 1]);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            tre[2 * i] = l;
        }
        if (r != -1)
        {
            tre[2 * i + 1] = r;
        }
    }
    dfs(1);
    return 0;
}