#include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
stack<int> stk;
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
            stk.push(x);
        }
        else
        {
            stk.pop();
        }
    }
    while (stk.size())
    {
        cout << stk.top() << ' ';
        stk.pop();
    }
}