#include<bits/stdc++.h>
using namespace std;
int main() {
	string n;
	cin>>n;
	string letter;
	for (int i=0;i<n.length();i++) {
		if (letter.find(n[i]) != letter.npos) {
			continue;
		}
		else {
			letter = letter+n[i];
		}
	}
	int time[letter.length()];
	for(int i=0;i<letter.length();i++) {
		int sum=0;
        for (int j=0;j<n.length();j++) {
        	if (letter[i]==n[j]) {
        		sum++;
			}
		}  
		time[i] = sum;      
    } 
    bool f=0;
	for (int i=0;i<letter.length();i++) {
		if (time[i]==1) {
			cout<<letter[i];
			f =1;
			break;
		}
	}  
	if (f==0) {
		cout<<"no";
	}
} 
