#include <bits/stdc++.h>
using namespace std;
int f(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return 1 + f(n - 1) * 2;
}
int main()
{
    int n;
    cin >> n;
    cout << f(n);
}