# include <iostream>
using namespace std;
main() 
{
	cout<<"Enter five numbers: ";
	int list[5];
	for(int in=0; in<5; in++) {
		cin>>list[in];
	}
	for(int a=0; a<=4; a++) {
		for(int b=0; b<=4-1; b=b+1) {
			if(list[b] > list[b+1]) {
				int big = list[b];
				list[b]=list[b+1];
				list[b+1] = big;
			}
		}
	}
	for(int print=0; print<5; print++) {
		cout<<list[print]<<" ";
	}
}