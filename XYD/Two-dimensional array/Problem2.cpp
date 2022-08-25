## include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	int sum=0;
	cin>>n>>m;
	int a[505][505];
	for (int i=1;i<=n;i++) {
		for(int j=1;j<=m;j++) {
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++) {
		for(int j=1;j<m;j++) {
			if (a[i][j]==a[i][j+1]) {
				sum++;
			}
		}
	}
	for (int i=1;i<=m;i++) {
		for(int j=1;j<n;j++) {
			if (a[j][i]==a[j+1][i]) {
				sum++;
			}
		}
	}
   	cout<<sum;
}
