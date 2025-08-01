#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int MOD=1e9+7;
void findsum(vector<long long> &a,int l,int r,unordered_map<long long,long long> &mp,long long sum,long long x){
    if(sum>x){
        return;
    }
    if(l>r || sum==x){
        mp[sum]++;
        return;
    }
    findsum(a,l+1,r,mp,sum,x);
    if(sum<=x-a[l]){
        findsum(a,l+1,r,mp,sum+a[l],x);
    }
}
long long countsubsetsum(vector<long long> &a,long long x){
    unordered_map<long long,long long> freq1;
    freq1.reserve(1<<20);
    findsum(a,0,a.size()/2-1,freq1,0,x);
    unordered_map<long long,long long> freq2;
    freq2.reserve(1<<20);
    findsum(a,a.size()/2,a.size()-1,freq2,0,x);
    long long ans=0;
    for(auto it:freq1){
        int rem=x-it.first;
        if(freq2.find(rem)!=freq2.end()){
            ans+=(1ll*it.second*freq2[rem]);
        }
    }
    return ans;
}
int main(){
    fastio();
    int t=1;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<countsubsetsum(a,x)<<endl;
    }
    return 0;
}