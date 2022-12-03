#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
    cin >> n;
    if (n < 27 && n >= 6) {
        cout << 6 << endl;
    	cout << "*" << 1;
    }
    else if (n < 495 && n >= 28) {
        cout << 6 << endl << 28 << endl;
    	cout << "*" << 2;
    }
    else if (n < 8127 && n >= 496) {
        cout << 6 << endl << 28 << endl << 496 << endl;
    	cout << "*" << 3;
    }
    else if (n < 100000 && n >= 8128) {
        cout << 6 << endl << 28 << endl << 496 << endl << 8128 << endl;
    	cout << "*" << 4;
    }
    else {
        cout << "*0";
    }
    cin.get();
}