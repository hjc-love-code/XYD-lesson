#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int list[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> list[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int mini = list[i][0], max = list[0][i];
        int miniX = i, miniY = 0, maxX = 0, maxY = i;
        for (int j = 0; j < n; j++)
        {
            if (list[i][j] < mini)
            {
                mini = list[i][j];
                miniX = i;
                miniY = j;
            }
            if (list[j][i] > max)
            {
                max = list[j][i];
                maxX = j;
                maxY = i;
            }
        }
        swap(list[miniX][miniY], list[maxX][maxY]);
        sort(list[i], list[i] + n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << list[i][j] << " ";
        }
        cout << endl;
    }
}