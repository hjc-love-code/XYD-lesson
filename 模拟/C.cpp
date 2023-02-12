#include <bits/stdc++.h>
using namespace std;
int h, s;
string cmd;
int main()
{
    cin >> h >> s;
    cin >> cmd;
    for (int i = 0; i < cmd.size(); i++)
    {
        if (cmd[i] == 'u' && s > 0)
        {
            s -= 1;
        }
        else if (cmd[i] == 'd' && s < h)
        {
            s += 1;
        }
    }
    cout << s;
}