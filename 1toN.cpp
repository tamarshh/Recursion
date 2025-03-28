#include<iostream>
using namespace std;

// void print(int N,int num){
//     if(num>N) return;
//     cout<< num<< endl;
//     print (N,num+1);
// }
// int main(){
//     int N;
//     cout<< "Enter the value of N"<< endl;
//     cin >> N ;
//     print(N,1);
// }

// single argument

void print(int num){
    if(num==1){
        cout<<num<<endl;;
        return;
        
    }
    print(num-1);
    cout<<num<< endl;

   
    
   
}
int main(){
        int N;
        cout<< "Enter the value of N"<< endl;
        cin >> N ;
        print(N);
       
    }