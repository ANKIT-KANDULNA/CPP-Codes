#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    vector<pair<int,int>> temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp.push_back({a[i],i+1});
    }
    sort(temp.begin(),temp.end());
    int i=0,j=n-1;
    bool found=0;
    pair<int,int> ans;
    while(i<j){
        if(temp[i].first+temp[j].first==x){
            found=1;
            ans={temp[i].second,temp[j].second};
            break;
        }
        else if(temp[i].first+temp[j].first<x){
            i++;
        }
        else{
            j--;
        }
    }
    found==1 ? cout<<ans.first<<" "<<ans.second<<endl : cout<<"IMPOSSIBLE"<<endl;
    return 0;
}