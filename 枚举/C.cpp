#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (long long i = 99381; i >= 31990; i--)
    {
        long long num = i * i;
        int vis[10] = {}, sum = 0;
        while (num)
        {
            vis[num % 10]++;
            sum += vis[num % 10];
            num /= 10;
        }
        if (sum == 10)
        {
            cout << i * i << endl;
            return 0;
        }
    }
}