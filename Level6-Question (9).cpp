#include<bits/stdc++.h>
using namespace std;
long long c[35][35];
int main() {
    c[1][1] = 1;
    int n, d;
    cin >> n >> d;
    for (int i = 1; i <=  + 1; i++) {
        if (i == 1) {
            for (int j = 2; j <= b + 1; j++) {
                for (int x = 0; x < n; x++) {
                    if (i == d[x][0] && j == d[x][1]) {
                        c[i][j] = 0;
                        break;
                    }
                    else {
                        c[i][j] = c[i-1][j] + c[i][j-1];
                    }
                }
            }
        }
        else {
            for (int j = 1; j <= b + 1; j++) {
                for (int x = 0; x < n; x++) {
                    if (i == d[x][0] && j == d[x][1]) {
                        c[i][j] = 0;
                        break;
                    }
                    else {
                        c[i][j] = c[i-1][j] + c[i][j-1];
                    }
                }
            }
        }   
    }
    //1,000,000,000
    cout << c[a][b];
    return 0;
}