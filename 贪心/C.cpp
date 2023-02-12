#include <bits/stdc++.h>
const int MAXN = 1e5;
int arr[MAXN];
bool mycmp(int x, int y)
{

    return x > y;
}
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    std::sort(arr, arr + n, mycmp);
    for (i = 0; i < n; i++)
    {
        if (arr[i] < i)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("%d\n", n);
    return 0;
}