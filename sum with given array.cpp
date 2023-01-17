#include<iostream>
using namespace std;
int subarrsum(int arr[],int sum,int n){
    int res;
    for(int i=0;i<arr[n];i++){
        int count=0;
        for(int j=i;j<arr[n];j++){
            count+=arr[j];
            if(sum==count){
                cout<<"yes";
            }
            else{
                cout<<"no";
            }
        }
    }
}
int main(){
    int arr[]={2,3,4,6,8};
    int sum=10;
    int n=5;
    cout<<subarrsum(arr,sum,n);
    return 0;
}
