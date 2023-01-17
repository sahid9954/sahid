#include<iostream>
using namespace std;
int maxcircular(int arr[],int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_sum=arr[i];
        int curr_max=arr[i];
        for(int j=1;j<n;j++){
            int index=(i+j)%n;
            curr_sum+=arr[index];
            curr_max=(arr[i],curr_sum);
        }
        res=max(res,curr_max);
    }
    return res;
}
int main(){
    int arr[]={10,5,-5};
    int n=3;
    cout<<maxcircular(arr,n);
    return 0;
}