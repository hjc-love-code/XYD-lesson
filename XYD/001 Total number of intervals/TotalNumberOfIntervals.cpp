#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,l,r,sum=0,input;
	scanf("%ld",&n);
	long long list[n]={0};
	for (int i=1;i<=n;i++) {
		cin>>input;
		sum+=input;
		list[i]=sum;
	}
	scanf("%ld",&m);
	for (int i=1;i<=m;i++) {
		scanf("%ld %ld",&l,&r);
		printf("%ld\n",list[r] - list[l-1]);

	}
}
