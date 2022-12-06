#include <iostream>
using namespace std;
int decimaltobinary(int n){
    int num=n;
    int rem,base=1,decimal=0;
    int temp=num;
    while(temp){
        rem=temp%10;
        temp=temp/10;
        decimal=decimal+base*rem;
        base=2*base;
    }
    return decimal;
}
int main() {
	// your code goes here
	int num=10101001;
	cout<<decimaltobinary(num)<<endl;
	
	return 0;
}
