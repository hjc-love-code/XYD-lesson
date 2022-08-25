#include<bits/stdc++.h>
using namespace std;
int main() {
	string a;
	cin>>a;
	for (int i=0;i<a.length();i++) {
	    if (a[i]>=97) {
	        a[i]-=32;
	    }
	    else {
	        a[i]+=32;
	    }
	}
	for (int i=0;i<a.length();i++) {
	    if (a[i]+3>'z') 
	        a[i] = a[i]+3-26;
	    else if(a[i]+3>'Z' && a[i]<'a') 
	        a[i] = a[i]+3-26; 
	    else 
	        a[i] += 3;
	}
    for (int i=a.length()-1;i>=0;i--) {
        cout<<a[i];
    }
    
}
