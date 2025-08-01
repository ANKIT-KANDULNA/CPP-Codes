#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long ans=1LL*i*i*(i*i-1)/2-1LL*4*(i-1)*(i-2);
        cout<<ans<<endl;
    }
    return 0;
}