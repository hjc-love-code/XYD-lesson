#include<bits/stdc++.h>
using namespace std;
int main() {
string a;
int t;
cin>>a>>t;
for (int i=0;i<a.length();i++) {
	if (a[i]+t > 'z') {	
		int t2=t%26;
		if (a[i] + t2>'z') {
			a[i] = ('a'-1) + (a[i]+t2-'z');
		}
		else {
			a[i]=a[i]+t2;
		}
	}
	else {
		a[i]=a[i]+t;	
	}	
}
cout<<a;
}
