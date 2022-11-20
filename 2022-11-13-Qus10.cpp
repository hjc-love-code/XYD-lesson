#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	int sum = a[0], last = 0;
	for (int i = 1; i < n; i++) {
		last = (a[i - 1] + b[i - 1]);
		if (last > a[i]) {
			sum += a[i];
		}
		else if (a[i] > last) {
			sum += last;
			a[i] = last;
		}
		else {
			sum += a[i];
		}
	}
	cout << sum;
}
// 思路：

//将当前站点的鱼的价格与（上一个站点需要的费用+上一个站点保存鱼的价格）进行比较，如果前者较小，那么在当前站点买鱼，如果后者较小，那么买前面站点的鱼