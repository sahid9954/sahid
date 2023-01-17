#include<iostream>
using namespace std;
int binarysearch(int n,int arr[],int key ){
      for(int i=0;i<n;i++){
         if(arr[i]==key){
            return i;
         }
    }
    return -1;
};
int main()
{ 
    int n=11;
    int arr[]={10,20,30,40,50,60,80,110,134,140,170};
    int key=110;
    cout<<binarysearch(n,arr,key)<<endl;
    return 0;
}