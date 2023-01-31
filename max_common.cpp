#include<bits/stdc++.h>
using namespace std;
int longestCommonSum(bool arr1[], bool arr2[], int n){
    int max_res=0;
    for(int i=0;i<n;i++){
        int sum1=0;int sum2=0;
        for(int j=i;j<n;j++){
               sum1+=arr1[j];
               sum2+=arr2[j];
                if(sum1==sum2){
                    int res=j-i+1;
                    if(res>max_res){
                        max_res=res;
                    }
        }
        }
   }
   return max_res;
}
int main(){
    bool arr1[]={0,1,0,0,0,0};
    bool arr2[]={1,0,1,0,0,1};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   cout << "Length of the longest common span with same "
            "sum is "<< longestCommonSum(arr1, arr2, n);
    return 0;
}