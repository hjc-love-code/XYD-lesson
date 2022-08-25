# include <iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter a number: ";
	cin>>a;
	for ( ; ; ) {
		if (a<=b) {
			break;
		}
		else {
			b = b * 10 + a%10;
			a = (a - a%10) / 10;
		}	
	}
	if ((a==b) || (b/10==a)) {
		cout<<"It's a symmetry number";
	}
	else {
		cout<<"It's not a symmetry number";
	}
}