#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>y>>x;
        long long ans;
        if(y<x){
            if(x%2==1){
                ans=1LL*x*x-y+1;
            }
            else{
                ans=1LL*(x-1)*(x-1)+y;
            }
        }
        else{
            if(y%2==1){
                ans=1LL*(y-1)*(y-1)+x;
            }
            else{
                ans=1LL*y*y-x+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}