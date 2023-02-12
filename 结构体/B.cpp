#include <bits/stdc++.h>
using namespace std;
struct node
{
    double a, b, c;
} nd[1005];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a, b;
        cin >> nd[i].a >> a >> b;
        nd[i].b = a + b;
        nd[i].c = a * 0.7 + b * 0.3;
    }
    for (int i = 0; i < n; i++)
    {
        if (nd[i].b > 140 && nd[i].c >= 80)
        {
            cout << "Excellent";
        }
        else
        {
            cout << "Not excellent";
        }
        cout << '\n';
    }
    return 0;
}
