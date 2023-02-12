#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    if (n % 2 != 0)
    {
        n = n << 2;
        n = n | 15;
        n = n ^ 255;
    }
    else
    {
        n = n >> 2;
        n = n | 255;
        n = n ^ 15;
    }
    cout << n;
}