#include<bits/stdc++.h>
using namespace std;
int longestsub(int arr[],int n){
    sort(arr,arr+n);
    int curr=1;
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            curr++;
        }
        else if(arr[i]!=arr[i-1]){
            return max(res,curr);
            curr=1;
        }
    }
    return max(res,curr);
}
int main(){
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<longestsub(arr,n)<<" "<<endl;
    return 0;
}