#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string list[1003];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    sort(list, list + n);
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << endl;
    }
}