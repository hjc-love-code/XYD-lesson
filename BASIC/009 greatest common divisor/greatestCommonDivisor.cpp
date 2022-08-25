# include <iostream>
using namespace std;
main() 
{	
	int a,b,x,y,z=0;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;
	cout<<"Simple way: ";
	for (int i=b;i>=1;i--) {
		if ((a%i==0) && (b%i==0)) {
			cout<<i<<" ";
			break;
		}
	}	
	cout<<endl<<"Euclid way: ";
	if (a>b) {x=a;y=b;}
	else {x=b;y=a;}
	for ( ; ; ) {
		if (x%y==0) {
			cout<<y<<" ";
			break;
		}
		else {
			z = x%y;
			x = y;
			y = z;
		}
	}		
}