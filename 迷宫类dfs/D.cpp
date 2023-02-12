#include <iostream>
using namespace std;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int vis[25][25];
char mp[25][25];
int n, m, cnt;
int END1, END2;
void dsf(int x, int y)
{
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int r = x + dx[i];
        int c = y + dy[i];
        if (mp[r][c] == '#' || r < 1 || r > n || c < 1 || c > m || vis[r][c] == 1)
        {
            continue;
        }
        else
        {
            vis[r][c] = 1;
            dsf(r, c);
        }
    }
}
int main()
{
    int startx, starty;
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> mp[i][j];
            if (mp[i][j] == '@')
            {
                startx = i;
                starty = j;
            }
        }
    }
    cin >> END1 >> END2;
    vis[startx][starty] = 1;
    dsf(startx, starty);
    cout << cnt;
}
