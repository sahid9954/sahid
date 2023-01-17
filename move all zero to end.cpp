#include<iostream>
using namespace std;
void movetozero(int n,int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={1,4,6,0,0,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    movetozero(n,arr);
    return 0;
}