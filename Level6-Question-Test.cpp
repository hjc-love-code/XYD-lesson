#include<bits/stdc++.h>
using namespace std;
struct node {
	long long num;
	long long a, b, c;
	long long sum;
}d[1005];

bool cmp(node x, node y) {
	if (x.sum > y.sum) {
		return true;
	}
	else if (x.a > y.a && x.sum == y.sum) {
		return true;
	}
	else if (x.b > y.b && x.a == y.a && x.sum == y.sum) {
		return true;
	} 
	else {
		return false;
	} 
		
}

int main() {
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		d[i].num = i + 1;
		cin >> d[i].a >> d[i].b >> d[i].c;
		d[i].sum = d[i].a + d[i].b + d[i].c;
	}
	sort(d, d + n, cmp);
	if (n < 10) {
		for (int i = 0; i < n; i++) {
			cout << d[i].num << ' ';
		}
	}
	else {
		for (int i = 0; i < 10; i++) {
			cout << d[i].num << ' ';
		}
	}
	
	
}

