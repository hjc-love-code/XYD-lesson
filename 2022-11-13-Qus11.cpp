#include<bits/stdc++.h>
using namespace std;
string a[1005]; 
int b[1005], c[1005];
int main() {
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < a[i].size(); j++) {
			int number = a[i][j] - '0';
			if (number == 0) {
				break;
			}
			else {
				b[number] += (m - j);
			}
		}
		int mini = b[0];
		for (int j = 0; j < n; j++) {
			bool isPass = true;
			for (int k = 0; k < n - 1; k++) {
				if (b[j] == c[k]) {
					isPass = false;
				}
			}
			if (b[j] < mini && isPass == true) {
				mini = b[j];
			}
		}
		for (int j = 0; j < n; j++) {
			if (b[j] == mini) {
				a[i].erase(j,1);
				c[i] = j;
			}
		}
	}
	for (int i = 0; i < m; i++) {
		cout << b[i] << endl;
	}
}
