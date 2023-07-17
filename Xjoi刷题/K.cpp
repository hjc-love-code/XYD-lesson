#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
string tre;
string s;

void dfs(string str, int d)
{
    if (d > n)
    {
        return;
    }
    bool one = false;
    bool ziro = false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
        {
            one = true;
        }
        else if (str[i] == '0')
        {
            ziro = true;
        }
    }
    if (one == true && ziro == true)
    {
        tre = tre + 'F';
    }
    else if (one == true && ziro == false)
    {
        tre = tre + 'I';
    }
    else if (one == false && ziro == true)
    {
        tre = tre + 'B';
    }
    dfs(str.substr(str.size() / 2, str.size() - 1), d + 1);
    dfs(str.substr(0, str.size() / 2), d + 1);
    
}

int main()
{
    cin >> n;
    cin >> s;
    dfs(s, 0);
    reverse(tre.begin(), tre.end());
    cout << tre;
}