#include<bits/stdc++.h>
using namespace std;
void swap_func(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
int main() {
	int x, y;
	cin >> x >> y;
	swap_func(&x, &y);
	cout << x << ' ' << y;
}
