#include <bits/stdc++.h>
#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
int n, x, num;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> num;
            que.push(num);
        }
        else if (x == 2)
        {
            if (que.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << que.front() << endl;
                que.pop();
            }
        }
        else
        {
            cout << que.size() << endl;
        }
    }
}