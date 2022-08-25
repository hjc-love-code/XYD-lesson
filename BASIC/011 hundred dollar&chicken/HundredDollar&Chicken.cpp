# include <iostream>
using namespace std;
main() 
{
	for (int five=0;five<=20;five++) {
		for (int three=0;three<=33;three++) {
			for (int one=0;one<=300;one=one+3) {
				if ((five+three+one==100) && (five*5+three*3+one/3==100)) {
					cout<<five<<" "<<three<<" "<<one<<endl;
				}
			}
		}
	}
}