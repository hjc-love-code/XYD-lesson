# include <iostream>
using namespace std;
main() 
{
	int input;
	cout<<"Enter side length: ";
	cin>>input;
	for (int y=1; y<=input; y++) {
		for (int x=1;x<=input;x++) {
			cout<<"* ";
		}
		cout<<endl;
	}
		
}