#include<bits/stdc++.h>
using namespace std;
main() {
	int a,b;
	cin>>a>>b;
	int c[a][b];
	int sum=0;
	for (int i=0;i<a;i++) {
		for (int j=0;j<b;j++) {
			cin>>c[i][j];
			sum+=c[i][j];
		}
	}
	int sum2=0;
	for (int i=1;i<a-1;i++) {
		for (int j=1;j<b-1;j++) {
			sum2+=c[i][j];
		}
	}
	cout<<sum-sum2;
}
