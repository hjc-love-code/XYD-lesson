# include <iostream>
using namespace std;
// Print multiplicationTabel
main()
{
	// To print row
	for (int x=1;x<=9;x=x+1) {
		// To print column
		for (int y=1;y<=x;y=y+1) {
			cout<<y<<"x"<<x<<"="<<y*x<<" ";
		}
		cout<<"\n";
	}
}