#include <iostream>
using namespace std;
void print(int N){
    cout<<N<< endl;
    if(N==2){
        //cout<<N<<endl;
        return;
    }
    print(N-2);
}
 int main(){
    int N;
    cout<<"Enter the value of N"<< endl;
    cin>>N;
    if(N%2==1){
        N--;
    }
    print(N);
    return 0;
 }