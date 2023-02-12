#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b;
    char c;
} nd[100005];
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
        cout << nd[i].a << ' ' << nd[i].b << ' ' << nd[i].c << '\n';
    }
    return 0;
}
