#include <bits/stdc++.h>
#include <iostream>
using namespace std;
long long f(long long x, long long y, long long z)
{
    if (y == 1)
    {
        return x;
    }
    else if (y % 2)
        return f(x, y / 2, z) * f(x, y / 2, z) % z * x % z;
    else
        return f(x, y / 2, z) * f(x, y / 2, z) % z;
}
int main()
{
    long long x, y, z;
    cin >> x >> y >> z;
    cout << f(x, y, z);
}