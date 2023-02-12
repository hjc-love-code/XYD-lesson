#include <iostream>
using namespace std;
int x[20], y[20];
int n, cnt;
bool check(int id)
{
    for (int i = 1; i < id; i++)
    {
        if (x[i] == x[id])
        {
            return false;
        }
        else if (y[i] == y[id])
        {
            return false;
        }
        else if (abs(x[id] - x[i]) == abs(y[id] - y[i]))
        {
            return false;
        }
    }
    return true;
}
void dsf(int id)
{
    if (id == n + 1)
    {
        if (cnt <= 2)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << x[i] << ' ';
            }
            cout << endl;
        }
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        x[id] = i;
        y[id] = id;
        if (check(id))
        {
            dsf(id + 1);
        }
    }
}
int main()
{
    cin >> n;
    dsf(1);
    cout << cnt;
    return 0;
}
