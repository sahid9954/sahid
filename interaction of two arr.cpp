#include<iostream>
#include<unordered_set>
using namespace std;
int interection(int arr1[],int arr2[],int m,int n){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(arr1[i]);
    }
    int res=0;
    for(int j=0;j<n;j++){
        if(s.find(arr2[j])!=s.end()){
            res++;
            s.erase(arr2[j]);
        }
    }
        return res;
}
int main(){
    int arr1[]={10,15,20,15,30,30,5};
    int arr2[]={30,5,30,80};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<interection(arr1,arr2,m,n)<<" ";
    cout<<endl;
    return 0;
}