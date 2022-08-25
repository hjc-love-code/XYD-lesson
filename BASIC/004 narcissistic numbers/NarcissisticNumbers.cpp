# include <iostream>
# include <math.h>
using namespace std;
main() {
	cout<<"narcissistic number: ";
	for (int i=2;i<1000;i++) {
		if(pow(i%10,3)+pow(i%100/10,3)+pow(i/100,3) == i) {
			cout<<i<<" ";
		}
	}
}