# include <iostream>
using namespace std;
main()
{
	int a,b=0;
	cout<<"Enter a number: ";
	cin>>a;
	for ( ; ; ) {
		if (a<=b) {
			break;
		}
		else {
			b = b*10 + a%10;
			a = (a - a%10) / 10;
		}
	}
	if ((a==b) || (b/10==a)) {
		cout<<"Yes";
	}
	else {
		cout<<"No";
	}
}