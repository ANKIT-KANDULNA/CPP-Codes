#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    vector<int> t(m);
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    sort(h.begin(),h.end());
    vector<int> ans(m,-1);
    vector<bool> visited(n,0);
    for(int i=0;i<m;i++){
        int l=0,r=n-1,idx=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(h[mid]<=t[i]){
                if(!visited[mid]){
                    idx=mid;
                }
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(idx!=-1){
            ans[i]=h[idx];
            visited[idx]=1;
        }
        cout<<ans[i]<<endl;
    }
    return 0;
}