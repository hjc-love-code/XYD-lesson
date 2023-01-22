#include<bits/stdc++.h>
using namespace std;
int b[2005] = { 0 }, c[2005], d[2005];
int main() {
	int n;
	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < s.size(); j++) {
			c[j] = s[s.size() - 1 - j] - '0';
		}
		for (int j = 0; j < s.size(); j++) {
			b[j] += c[j];
		}
			
		for (int j = 0; j < s.size(); j++) {
			b[j + 1] += b[j] / 10;
			b[j] %= 10;
		}
		int len = s.size();
		while (b[len - 1] == 0 && len - 1 > 0) {
			len--;
		}
	}
    for (int i = 0; i < 20000; i++) {
		d[i] += b[i] * (n - 1);
	}
	for (int i = 0; i < 20000; i++) {
		d[i + 1] += d[i] / 10;
		d[i] %= 10;
	}
	int len = 2000;
	while (c[len - 1] == 0 && len - 1 > 0) {
		len--;
	}
	for (int i = len; i >= 0; i--) {
		cout << d[i];
	}
}