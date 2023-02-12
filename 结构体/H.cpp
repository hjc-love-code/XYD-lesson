#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b;
} s[100005];

bool cmp(node x, node y)
{
    if (x.a < y.a)
        return true;
    else if (x.a == y.a && x.b < y.b)
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
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].a >> s[i].b;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].a << ' ' << s[i].b << '\n';
    }
}