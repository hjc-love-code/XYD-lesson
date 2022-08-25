#include <iostream>
using namespace std;
main()
{
	int a=0,b=1,c,index=1,number;
	cout<<"Fibonacci sequence\n";
	cout<<"The length of the series:";
	cin>>number;
	for (index;index<=number;index=index+1) {
		c = a + b;
		a = b;
		cout<<a<<",";
		b = c;
	}
}

