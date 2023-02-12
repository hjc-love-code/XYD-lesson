#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int bg[1005], ed[1005];
int main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> bg[i] >> ed[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ed[j] > ed[j + 1])
            {
                swap(ed[j], ed[j + 1]);
                swap(bg[j], bg[j + 1]);
            }
        }
    }
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        if (bg[i] >= t)
        {
            ans++;
            t = ed[i];
        }
    }
    cout << ans;
}
