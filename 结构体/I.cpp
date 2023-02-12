#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b;
    int sum;
} s[100005];

bool cmp(node x, node y)
{
    if (x.sum > y.sum)
        return true;
    else if (x.sum == y.sum && x.a > y.a)
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
        s[i].sum = s[i].a + s[i].b;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << s[i].a << ' ' << s[i].b << '\n';
    }
}