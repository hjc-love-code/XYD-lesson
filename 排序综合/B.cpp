#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, list[1003];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> list[i];
    }
    sort(&list[0], list + n);
    swap(list[0], list[n - 1]);
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << " ";
    }
}