#include<bits/stdc++.h>
using namespace std;
struct node {
	string type;
	double m;
}s[100005];

bool cmp(node x, node y) {
	if (x.type == "male" && y.type == "female")
		return true;
	else if (x.type == "male" && x.m < y.m) {
		return true;
	}
	else if (y.type == "female" && x.m > y.m) {
		return true;
	}
	else {
		return false;
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i].type >> s[i].m;
	}
	sort(s, s + n, cmp);
	for (int i = 0; i < n; i++) {
		printf("%.2lf ",s[i].m);
	}
}

