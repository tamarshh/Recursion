#include<iostream>
using namespace std;
int perfectSum(int arr[],int index,int n,int sum){
    if(index==n)return sum==0;

    return  perfectSum(arr,index+1,n,sum) + perfectSum(arr,index+1,n,sum-arr[index]);
}


int main(){

    int arr[]={5,2,3,10,6,8};
   int ans= perfectSum(arr,0,6,10);
   cout<<ans;

}