#include<bits/stdc++.h>
using namespace std;
long long a[100005][4];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n + 2; i += 2) {
        a[i][0] = 2;
        a[i + 1][0] = 1;
    }
    a[0][1] = 1;
    for (int i = 1; i < n + 2; i++) {
        for (int j = 1; j < 4; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    cout << a[n + 1][3];
}