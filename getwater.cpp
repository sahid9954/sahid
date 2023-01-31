#include<bits/stdc++.h>
using namespace std;
int getwater(int arr[],int n){
    int res=0;
    for(int i=1;i<n-1;i++){
        int lmax=arr[0];
        for(int j=0;j<i;j++){
            lmax=max(lmax,arr[j]);
        }
        int rmax=arr[0];
        for(int j=i+1;j<n;j++){
            rmax=max(rmax,arr[j]);
        }
        res=res+(min(lmax,rmax)-arr[i]);
    }
    return res;
}
int main(){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<getwater(arr,n)<<" "<<endl;
    return 0;
}