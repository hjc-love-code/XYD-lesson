#include<bits/stdc++.h>
using namespace std;
int a[35][35];
int n;
int main() {
    a[1][1] = 1;
    int n;
    cin >> n;
    for (int i = 1; i <= n + 1; i++) {
        for (int j = 1; j < i; j++) {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
    }
    for (int i = 1; i <= n + 1; i++) {
        for (int j = 1; j < i; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}