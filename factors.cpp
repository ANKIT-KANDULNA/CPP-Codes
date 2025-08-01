#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int MOD=1e9+7;
void factor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i){
                cout<<n/i<<" ";
            }
        }
    }
}
int main(){
    fastio();
    int n;
    cin>>n;
    factor(n);
    return 0;
}