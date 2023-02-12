#include <bits/stdc++.h>
using namespace std;
int k, ans;
int main()
{
    cin >> k;
    for (int i = 10000; i <= 30000; i++)
    {
        int _1 = i / 10000, _2 = i % 10000 / 1000, _3 = i % 1000 / 100, _4 = i % 100 / 10, _5 = i % 10;
        int sub1 = _1 * 100 + _2 * 10 + _3;
        int sub2 = _2 * 100 + _3 * 10 + _4;
        int sub3 = _3 * 100 + _4 * 10 + _5;
        if (sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0)
        {
            cout << i << endl;
            ans++;
        }
    }
    if (ans == 0)
    {
        cout << "No";
    }
}