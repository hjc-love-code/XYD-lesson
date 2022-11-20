#include<bits/stdc++.h>
using namespace std;
string s1;
long long a[1005], s;
int main() {
	cin >> s1 >> s;
	for (int i = 0; i < s1.size(); i++) {
		a[i] = s1[s1.size() - 1 -i] - '0';
	}
	int mini = 9, index = 0;
	for (int i = 0; i < s1.size(); i++) {
		if (a[i] < mini && a[i] != 0) {
			mini = a[i];
			index = i;
		}
	}
	sort(&a[0],a+s1.size());
	cout << a[0] << endl << index << endl;
	if (a[0] == 0) {
		swap(a[0],a[index]);
	}
	int len = s1.size();
	for (int i = 0; i < s1.size()-s; i++) {
		cout << a[i];
	}
}
// 