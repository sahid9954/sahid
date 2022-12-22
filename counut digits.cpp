#include<iostream>
using namespace std;
int countdigits(int n){
    int res=0;
    while(n>0){
        n=n/10;
        res++;
    }
    return res;
}
int main(){
    int n;
    n=789;
    cout<<countdigits(n)<<endl;
}