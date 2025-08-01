#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    long long sum=0,ans=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>p[i];
        sum+=p[i];
    }
    for(int i=0;i<(1<<n);i++){
        long long s=0;
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                s+=p[j];
            }
        }
        ans=min(ans,abs(sum-s-s));
    }
    cout<<ans<<endl;
    return 0;
}