#include <bits/stdc++.h>
using namespace std;
struct node
{
    char name[10];
    int a, b, c;
    int sum;
} s[1005];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c;
        s[i].sum = s[i].a + s[i].b + s[i].c;
    }
    int number = 0;
    int max = s[0].sum;
    for (int i = 0; i < n; i++)
    {
        if (s[i].sum > max)
        {
            max = s[i].sum;
            number = i;
        }
    }
    cout << s[number].name << ' ' << s[number].a << ' ' << s[number].b << ' ' << s[number].c;
}
