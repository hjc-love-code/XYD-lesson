#include <bits/stdc++.h>
using namespace std;

int last(int a, int b)
{
    return max(a % b, b % a);
}

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", last(a, b));
    }
}
