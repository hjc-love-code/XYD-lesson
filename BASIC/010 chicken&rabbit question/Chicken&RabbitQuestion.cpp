# include <iostream>
using namespace std;
main() 
{
	int head,foot;
	cout<<"Enter number of head and foot: ";
	cin>>head>>foot;
	if (head>=foot) {
		cout<<"Error,head can't more than foot!";
	}
	else {
		cout<<"Rabbit: "<<(foot-(head*2)) / 2<<endl;
		cout<<"Chicken: "<<head - ((foot-(head*2)) / 2)<<endl;
	}
}