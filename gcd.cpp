#include<iostream>
using namespace std;
int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}
// or else from euclid algorithm the logic is
// ex-a=12,b=15 input.
// int gcd(int a,int b){
//     if(b==0)  
//     return a;
//     else
//     return gcd(b,a%b);  //gcd(12,15)->gcd(15,12)->gcd(12,3)->gcd(3,0)
// }