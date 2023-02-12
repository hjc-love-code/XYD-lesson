#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int a = 1; a <= 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                for (int d = 0; d <= 9; d++)
                {
                    int ab = (a * 10 + b);
                    int cd = (c * 10 + d);
                    int total = a * 1000 + b * 100 + c * 10 + d;
                    if ((ab + cd) * (ab + cd) == total && total < n)
                    {
                        cout << a << b << c << d << '\n';
                    }
                }
            }
        }
    }
}