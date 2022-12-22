#include<iostream>
using namespace std;
string palindromenumber(int n){
    int a=n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==a){
        return "yes";
    }
    else{
        return "no";
    }
}
int main(){
    int n=367;
    cout<<palindromenumber(n)<<endl;
}