#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n+1;j++){//1 2 3 4 5 6 where 1to6=i &2to6=j
            if(array[j]<array[i]){
            int temp=array[j];
            array[j]=array[i];
            array[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }
    return 0;
}