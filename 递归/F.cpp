#include <bits/stdc++.h>
using namespace std;
long long g(long long x, long long y)
{
    if (x <= 0 || y <= 0)
    {
        return 1;
    }
    else
    {
        return g(x - 1, y) + 2 * g(x - 1, y - 1) + 3 * g(x, y - 1);
    }
}
int main()
{
    long long x, y;
    cin >> x >> y;
    cout << g(x, y);
}