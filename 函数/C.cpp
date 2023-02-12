#include <bits/stdc++.h>
using namespace std;
string s1, s2;
int a[20000], b[20000];
int main()
{
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        a[i] = s1[s1.size() - 1 - i] - '0';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        b[i] = s2[s2.size() - 1 - i] - '0';
    }
    if (s1.size() < s2.size())
    {
        for (int i = s1.size() - 1; i >= 0; i--)
        {
            cout << a[i];
        }
    }
    else if (s2.size() < s1.size())
    {
        for (int i = s2.size() - 1; i >= 0; i--)
        {
            cout << b[i];
        }
    }
    else
    {
        for (int i = s1.size() - 1; i >= 0; i--)
        {
            if (a[i] < b[i])
            {
                for (int i = s1.size() - 1; i >= 0; i--)
                {
                    cout << a[i];
                }
                break;
            }
            else if (a[i] > b[i])
            {
                for (int i = s2.size() - 1; i >= 0; i--)
                {
                    cout << b[i];
                }
                break;
            }
            else
            {
                continue;
            }
        }
    }
}
