#include <bits/stdc++.h>
using namespace std;
string n;
long long ans;
long long rep[1005];
int main() {
    cin >> n;
    rep[0] = stoi(n);
    for (int i = 1; ; i++) {
        long long mid = (n[2] - '0') * 100 + (n[3] - '0') * 10 + n[4]- '0';
        rep[i] = mid * mid;
        cout << mid << ' ' << mid * mid << endl;
        for (int j = 0; j < i; j++) {
            if (rep[j] == mid * mid) {
                cout << ans;
                return 0;
            }
        }
        n = to_string(rep[i]);
        ans++;

    }
}

