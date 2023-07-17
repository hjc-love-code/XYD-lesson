#include <iostream>
using namespace std;
int tre[505][505];
int n, x, y;
int main()
{
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        tre[x][y] = 1;
        tre[y][x] = 1;
    }
    while (cin >> x >> y)
    {
        if (tre[x][y] == 1) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    return 0;
}