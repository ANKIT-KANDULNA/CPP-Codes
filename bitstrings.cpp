#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long power(int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=(1LL*ans*2)%mod;
    }
    return ans%mod;
}
int main(){
    int n;
    cin>>n;
    long long ans=power(n);
    cout<<ans%mod<<endl;
    return 0;
}