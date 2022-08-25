#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cin>>a;
	int sum=0;
	int index=1;
	for (int i=0;i<11;i++) {
	
		if (a[i]=='-') {
			continue;
		}
		else {
			if (a[i]=='X') {
				sum+=10*10;
				index += 1;
			}
			else {
				sum+= (a[i]-48) * index;
				index += 1;	
			}

		}
	}
	if (sum%11 == a[12]-48 || (sum%11==10 && a[12]=='X')) {
		cout<<"Right";
	}
	else {
		for (int i=0;i<12;i++) {
			cout<<a[i];
		}
		if (sum%11==10) {
			cout<<"X";
		}
		else {
			cout<<sum%11;
		}
	}
}
