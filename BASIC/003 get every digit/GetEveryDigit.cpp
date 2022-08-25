# include <iostream>
using namespace std;
main()
{
	int input,digit,a=100,b=10;
	cout<<"Enter total digit: ";
	cin>>digit;
	cout<<"Enter a "<<digit<<" digit numbers: ";
	cin>>input;
	cout<<input%10<<" ";
	for (int i=digit-1;i>=2;i--) {
		cout<<input%a/b<<" ";
		a *= 10;
		b *= 10;
	}
	cout<<input/b<<" ";
}