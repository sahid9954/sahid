#include<iostream>
using namespace std;
int trialingzero(int n){
    int res=0;
    // This code improves the time complexity from old theta(n) or theta(n^2) to theta(logn).
    for (int i = 5; i <= n; i=i*5)
    {
        res+=(n/i);
    }
    return res;
}

int main(){
    int n=10;
    cout<<trialingzero(n)<<endl;
}
