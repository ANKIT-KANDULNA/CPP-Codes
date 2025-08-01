#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsequence(vector<int> arr){
    vector<vector<int>> ans;
    int n=arr.size();
    for(int i=0;i<(1<<n);i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if(i & (i<<j)){
                temp.push_back(arr[j]);
            }
        }
        ans.push_back(temp);
    }
    return ans;
}
void recursion(int i,vector<int> &arr,vector<vector<int>> &ans,vector<int> &temp){
    if(i>=arr.size()){
        ans.push_back(temp);
        return;
    }
    temp.push_back(arr[i]);
    recursion(i+1,arr,ans,temp);
    temp.pop_back();
    recursion(i+1,arr,ans,temp);
}
int main(){
    vector<int> arr={1,2,3,4,5};
    vector<vector<int>> ans;
    vector<int> temp;
    recursion(0,arr,ans,temp);
    for(auto it:ans){
        for(int i:it){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}