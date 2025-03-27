#include<iostream>
using namespace std;
bool find(int arr[],int n,int index,int target){
    if(target==0){
        // cout<<sum<< endl;
        return 1;
    }
    if(index==n || target<0){
        return 0;
    }
    find(arr,n,index+1,target-arr[index]) || find(arr,n,index+1,target);
    // print(arr,n,index+1,sum+ arr[index]);
}

 int main(){
    int arr[]={3,4,4};
   // int n=arr.size();
    int index=0;
    int sum=0;
    int target=12;

   
    if( find(arr,3,index,target)) cout<<"1";
    else cout<< "0";
    return 0;
 }