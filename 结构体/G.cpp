#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b, c;
};
bool operator<(node x, node y)
{
    if (x.a < y.a && x.b < y.b && x.c < y.c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    node a[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].a >> a[i].b >> a[i].c;
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] < a[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
        cout << '\n';
    }
}