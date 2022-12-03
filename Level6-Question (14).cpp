#include<bits/stdc++.h>
using namespace std;

int getmax(int a, int b) {
	for (int i = max(a, b); ; i += max(a, b)) {
		if (i % a == 0 && i % b == 0) {
			return i;
		}
	}
}

int getmini(int a, int b) {
	for (int i = a; ; i = i / 2) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << getmini(a,b) << endl << getmax(a,b);
}
