#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string s1, s2, s3[1005];
int a[1005], b[1005], c[1005];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s3[i];
    }
    string mx = s3[0], mini = s3[0];
    for (int i = 0; i < n; i++)
    {
        if (s3[i].size() > mx.size())
        {
            mx = s3[i];
        }
        else if (s3[i].size() == mx.size())
        {
            for (int i = s3[i].size() - 1; i = 0; i--)
            {
                if (s3[i][i] > mx[i])
                {
                    mx = s3[i];
                    break;
                }
            }
            continue;
        }
        else
        {
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s3[i].size() < mini.size())
        {
            mini = s3[i];
        }
        else if (s3[i].size() == mini.size())
        {
            for (int i = s3[i].size() - 1; i = 0; i--)
            {
                if (s3[i][i] > mini[i])
                {
                    mini = s3[i];
                    break;
                }
            }
            continue;
        }
        else
        {
            continue;
        }
    }
    s1 = mx;
    s2 = mini;
    if (s2.size() > s1.size())
    {
        swap(s1, s2);
        cout << '-';
    }
    else if (s2.size() == s1.size() && s2 > s1)
    {
        swap(s1, s2);
        cout << '-';
    }
    for (int i = 0; i < s1.size(); i++)
    {
        a[i] = s1[s1.size() - 1 - i] - '0';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        b[i] = s2[s2.size() - 1 - i] - '0';
    }

    int len = max(s1.size(), s2.size());
    for (int i = 0; i < len; i++)
    {
        c[i] = a[i] - b[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (c[i] < 0)
        {
            c[i] += 10;
            c[i + 1]--;
        }
    }
    while (c[len - 1] == 0 && len - 1 > 0)
    {
        len--;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        cout << c[i];
    }
    return 0;
}