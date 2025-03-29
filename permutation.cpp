//  given an array of integers. try to compute all the permutations of the array
// example- {1,2,3} ==>> 
// [{1,2,3},{1,3,2},{2,1,3}{2,3,1},{3,1,2},{3,2,1}]


#include<iostream>
#include<vector>
using namespace std;
void permutation(int arr[],vector<vector<int>> &ans, vector<int>&temp,vector<bool>&visited)
{

    if(visited.size()==temp.size()){
        ans.push_back(temp);
        return;
    }
   for(int i=0;i<visited.size();i++){
    if(visited[i]==0){
        visited[i]=1;
        temp.push_back(arr[i]);
        permutation(arr,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
    }
   }
}
int main(){
    int arr[]={1,2,3};
    vector<vector<int>> ans;
    vector<int>temp;
    vector<bool> visited(3,0);

    permutation(arr,ans,temp,visited);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
           
        } cout<<endl;
        
    }
    return 0;

}