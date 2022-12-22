#include<iostream>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
        // else {
        //     return -1;
        // }
    }
    return -1;
}
int main(){
    int arr[]={10,5,30,40,80};
    int n=5;
    int x=40;
    cout<<search(arr,n,x)<<endl;
    //return 0;
}