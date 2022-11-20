#include<bits/stdc++.h>
using namespace std;
char a[5] = {'D','C','B','A','D'};
char b[5];
int main() {
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> b[i];
		if (b[i] == a[i]) {
			sum += 30;
		}
	}
	cout << sum;
}
// 