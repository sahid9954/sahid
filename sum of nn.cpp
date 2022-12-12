#include<iostream>
using namespace std;
int sum(int n){
   int  sum=n*(n+1)/2;
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}