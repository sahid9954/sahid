#include<iostream>
using namespace std;
int majorityofele(int arr[],int n){
    for(int i=0;i<n;i++){
    int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(count>n/2){
                return count;
            }
        }
    }
return -1;
}
int main(){
    int arr[]={1,2,4,6,6,6,6};
    int n=7;
    cout<<majorityofele(arr,n);
    return 0;
}