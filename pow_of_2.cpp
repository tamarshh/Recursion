#include<iostream>
#include<cmath>
using namespace std;
int power(int num,int n){
    if(n==1) return num;
    if(n==0) return 1;
    return num*pow(num,n-1);
}
int main(){
    int n;
    cout<< " enter the number"<< endl;
    cin>>n;
   int ans= power(2,n);
   cout<< ans;
}