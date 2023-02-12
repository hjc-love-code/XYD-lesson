#include <iostream>
using namespace std;
int dx[] = {0, -2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {0, -1, 1, -2, 2, -2, 2, -1, 1};
long long mp[25][25];
long long n, m, A, B;
int main()
{
    cin >> n >> m >> A >> B;
    n += 1;
    m += 1;
    A += 1;
    B += 1;
    for (int i = 0; i <= 8; i++)
    {
        int r = A + dx[i];
        int c = B + dy[i];
        if (r > n || r < 1 || c > m || c < 1)
        {
            continue;
        }
        else
        {
            mp[r][c] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 && j == 1)
            {
                mp[1][1] = 1;
            }
            else if (mp[i][j] == 1)
            {
                mp[i][j] = 0;
            }
            else
            {
                mp[i][j] = mp[i - 1][j] + mp[i][j - 1];
            }
        }
    }
    cout << mp[n][m];
}
