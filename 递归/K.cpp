#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    if (n < 10)
    {
        cout << n << endl;
        return;
    }
    else
    {
        f(n / 10);
        cout << n % 10 << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    f(n);
}