#include <bits/stdc++.h>
using namespace std;
double f(double x, double n)
{
    if (n == 1)
    {
        return x / (1 + x);
    }
    else
    {
        return x / (n + f(x, n - 1));
    }
}
int main()
{
    double x, n;
    cin >> x >> n;
    cout << fixed << setprecision(2) << f(x, n);
}