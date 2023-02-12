#include <bits/stdc++.h>
using namespace std;
struct node
{
    string a;
    double b, c;
} nd[1005];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nd[i].a >> nd[i].b >> nd[i].c;
    }
    for (int i = 0; i < n; i++)
    {
        cout << nd[i].a << ' ' << nd[i].b + 1 << ' ';
        if (nd[i].c * 1.2 > 400)
        {
            cout << 400;
        }
        else
        {
            cout << nd[i].c * 1.2;
        }
        cout << '\n';
    }
    return 0;
}
