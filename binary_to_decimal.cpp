#include<iostream>
#include<cmath>
using namespace std;
int main(){
int dec=0,binary,base=1,rem;
cin>>binary;
while(binary!=0){
    rem=binary%10; 
    dec=dec+rem*base; 
   binary=binary/10;
    base=base*2;
    
}
cout<<"dec equivalent of the binary number="<<dec;
cout<<endl;
return 0;
}
