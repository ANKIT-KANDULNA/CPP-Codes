#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> mf(n);
    for(int i=0;i<n;i++){
        cin>>mf[i].first>>mf[i].second;
    }
    sort(mf.begin(),mf.end(),comp);
    int cnt=1;
    int ending=mf[0].second;
    for(int i=1;i<n;i++){
        if(ending<=mf[i].first){
            cnt++;
            ending=mf[i].second;
        }
    }
    cout<<cnt<<endl;
    return 0;
}