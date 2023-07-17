#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

long long n, m;
string num[20];


bool check(string number)
{
    for (int i = 1; i <= m; i++)
    {
        if (number.find(num[i]) > number.size())
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> num[i];
    }
    for (int i = 1;; i++)
    {
        long long newnum = n * i;
        if (check(to_string(newnum)))
        {
            cout << newnum;
            return 0;
        }
    }
}