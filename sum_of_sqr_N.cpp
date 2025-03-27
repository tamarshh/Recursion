#include<iostream>
#include<cmath>
using namespace std;
int square(int n){
    if(n==1) return 1;
    return n*n +square(n-1);
}


int main(){
    int n;
    cout<< " Enter the number"<< endl;
    cin >> n;
   int ans= square(n);
   cout<< ans;
}