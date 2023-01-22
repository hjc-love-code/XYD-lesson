#include<bits/stdc++.h>
using namespace std;
int a[35][35];
int n;
int main() {
    a[1][1] = 1;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n + 1; i++) {
        if (i == 1) {
            for (int j = 2; j <= m + 1; j++) {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        else {
            for (int j = 1; j <= m + 1; j++) {
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
        
    }
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= m + 1; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << a[n+1][m+1];
    return 0;
}