#include <iostream>
#include <vector>
using namespace std;

int cnt[1005];
int n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char x;
            cin >> x;
            if (x == '1') {
                cnt[i]++;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (i == 1) {
            cout << cnt[i] << ' ';
        }
        else {
            cout << cnt[i] - 1 << ' ';
        }
    }
}