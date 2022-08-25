# include <iostream>
using namespace std;
main() {
	int input;
	cout<<"Enter total number: ";
	cin>>input;
	cout<<endl;
	for(int i=1;i<=input;i=i+1) {
		if (i%2==1) {
			cout<<i<<" ";
 		}
    }
    cout<<endl;
    cout<<endl;
	for(int i=0;i<=input;i=i+1) {
		if (i%2==0) {
			cout<<i<<" ";
	    }
	}
	cout<<endl;
}