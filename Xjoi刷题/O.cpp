#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int num[10];
int lst[10];
char func[10];
int vis[10];
long long ans = LONG_MAX;

bool cmp(char a, char b) {
    if (a == '*' && b == '+') {
        return true;
    }
    else {
        return false;
    }
}

void dfs(int dep) {
    if (dep > 4) {
        long long number = lst[1];
        for (int i = 2; i <= 4; i++) {
            if (func[i - 1] == '*') {
                number *= lst[i];
            }
            else if (func[i - 1] == '+') {
                number += lst[i];
            }
        }
        if (number < ans) {
            ans = number;
        }
        return;
    }
    for (int i = 1; i <= 4; i++) {
        if (vis[i] == 1) {
            continue;
        }
        vis[i] = 1;
        lst[dep] = num[i];
        dfs(dep + 1);
        vis[i] = 0;
    }
}

int main() {
    for (int i = 1; i <= 4; i++) {
        cin >> num[i];
    }
    for (int i = 1; i <= 3; i++) {
        cin >> func[i];
    }
    sort(func, func + 3, cmp);
    dfs(1);
    cout << ans;
}