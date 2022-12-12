#include<iostream>
using namespace std;
int binarysearch(int n,int array[],int key){
    int s=0;
    int e=n;
    int mid;
    while(s<=e){
        mid=(s+e)/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}    
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<=n;i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(n,array,key)<<endl;
    return 0;
}