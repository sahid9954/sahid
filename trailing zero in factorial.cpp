#include<iostream>
using namespace std;
int trialingzero(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
        int res=0;
        while(fact%10==0){
             res++;
             fact=fact/10;
        }
    return res;
}
int main(){
    int n=10;
    cout<<trialingzero(n)<<endl;
}