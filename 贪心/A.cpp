#include <bits/stdc++.h>
using namespace std;
double get_temp(double a, int type);
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int type;
        double a;
        cin >> a >> type;
        cout << fixed << setprecision(3) << get_temp(a, type) << endl;
    }
}
double get_temp(double a, int type)
{
    if (type == 1)
    {
        return a / 5 * 9 + 32;
    }
    else
    {
        return (a - 32) / 9 * 5;
    }
}