# include <iostream>
using namespace std;
main() 
{
	int input;
	cout<<"Enter total number: ";
	cin>>input;
	cout<<"Number of peaches: ";
	for (int i=1;i<=input;i++) {
		if ((i%5==4) && (i%9==2)) {
			cout<<i<<" ";
		}
	}
	
}