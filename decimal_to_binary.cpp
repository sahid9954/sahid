#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int rem,decimal,binary=0,product=1;
	cin>>decimal;
	while(decimal!=0){
	    rem=decimal%2;
	    binary=binary+(product*rem);
	    decimal=decimal/2;
	    product=product*10;
	}
	cout<<binary;
	return 0;
}
