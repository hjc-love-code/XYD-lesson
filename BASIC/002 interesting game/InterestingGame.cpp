# include <iostream>
using namespace std;
main() {
	int ge,shi,bai;
	for(int a=1;a<=1000;a=a+1) {
		ge = a % 10;
		shi = a % 100 /10;
		bai = a /100;
		if((a%7==0) || ((ge==7) || (shi==7) || (bai==7))) {
			cout<<"pass ";
		}
		else {
			cout<<a<<" ";
		}
	}
} 