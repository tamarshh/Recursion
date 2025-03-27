#include <iostream>
using namespace std;
void print(int N){
    cout<<N<< endl;
    if(N==1){
        cout<<N<<endl;
        return;
    }
    print(N-1);
}
 int main(){
    int N;
    cout<<"Enter the value of N"<< endl;
    cin>>N;
    print(N);
    return 0;
 }