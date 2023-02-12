#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
int main()
{
    char op;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> op;
        if (op == '+')
        {
            int x;
            cin >> x;
            que.push(x);
        }
        else
        {
            que.pop();
        }
    }
    while (que.size())
    {
        cout << que.front() << ' ';
        que.pop();
    }
}