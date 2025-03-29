#include<iostream>
using namespace std;
int perfectSum(int arr[],int index,int n,int sum){
    if(sum==0) return 1; 
    if(index==n || sum<0) return 0;

    return  perfectSum(arr,index+1,n,sum) + perfectSum(arr,index,n,sum-arr[index]);
}
int main(){

    int arr[]={2,3,4};
   int ans= perfectSum(arr,0,3,6);
   cout<<ans;
}