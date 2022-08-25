# include <iostream>
using namespace std;
main() 
{
	int a,add=1;
	cout<<"Enter bottom: ";
	cin>>a;
	int space=a/2;
	for (int y=1; y<=a/2+1; y++) {
		for (int s=1;s<=space;s++) {
			cout<<"  ";
		}
		for (int x=1; x<=add; x++) {
			cout<<"* ";
		}
		add += 2;
		space -= 1;
		cout<<endl;
	}
}