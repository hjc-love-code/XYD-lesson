#include <bits/stdc++.h>
using namespace std;
int n, ans;
int fib(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    cin >> n;
    for (int x = 0; x <= n; x++)
        ans = fib(x);
    cout << ans;
}