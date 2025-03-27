#include<iostream>
using namespace std;
void print(int arr[],int n,int index,int sum){
    if(index==n){
        cout<<sum<< endl;
        return;
    }
    print(arr,n,index+1,sum);
    print(arr,n,index+1,sum+ arr[index]);
}

 int main(){
    int arr[]={3,4,5};
   // int n=arr.size();
    int index=0;
    int sum=0;

    print(arr,3,index,sum);
    return 0;
 }