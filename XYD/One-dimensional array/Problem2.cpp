#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,c;
	cin>>n>>m;
	int list[n];
	for (int i=0;i<n;i++) {
		cin>>list[i];
	}
	for (int i=1;i<=m;i++) {
		c = list[n-1];
		for (int i2=n;i2>0;i2--) {
			list[i2] = list[i2-1];	
		}
		list[0] = c;
	}
	for (int i=0;i<n;i++) {
		if (i==(n-1)) {
			cout<<list[i];
		}
		else {
			cout<<list[i]<<" ";
		}

	}
}
