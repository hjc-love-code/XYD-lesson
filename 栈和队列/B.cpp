#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
stack<int> stk;
int main() {
    int n, id = 1;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        while (id <= x) {
            stk.push(id);
            id++;
        }
        if (x == stk.top()) {
            stk.pop();
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}