#include<iostream>
using namespace std;

int power(int x,int n){
    int res=1;
    while(n>0){
        if(n%2!=0){
            res=res*x;
            x=x*x;
            n=n/2;//n>>1;
        }
    }
    return res;
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<power(x,n)<<endl;
}