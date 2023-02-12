#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    if (n < 10)
    {
        cout << n << n;
        return;
    }
    else
    {
        cout << n % 10;
        f(n / 10);
        cout << n % 10;
    }
}
int main()
{
    int n;
    cin >> n;
    f(n);
}