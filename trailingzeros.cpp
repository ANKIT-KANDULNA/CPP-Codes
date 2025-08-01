#include <bits/stdc++.h>
using namespace std;

long long zeros(long long n){
    long long cnt=0;
    for(long long i=5;i<=n;i=1LL*i*5){
        cnt+=n/i;
    }
    return cnt;
}
int main(){
    long long n;
    cin>>n;
    long long ans=zeros(n);
    cout<<ans<<endl;
    return 0;
}