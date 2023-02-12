#include <bits/stdc++.h>
using namespace std;
void f(int n)
{
    if (n == 1)
    {
        cout << "hug fish me ";
        return;
    }
    cout << "hug" << ' ';
    f(n -= 1);
    cout << "me" << ' ';
}
int main()
{
    int n;
    cin >> n;
    cout << "dog" << ' ';
    f(n);
}