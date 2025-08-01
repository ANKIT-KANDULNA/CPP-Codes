#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        string ans;
        if(a>b){
            swap(a,b);
        }
        if(2*a<b){
            ans="NO";
        }
        else{
            a%=3;
            b%=3;
            if(a>b){
                swap(a,b);
            }
            if((a==0 && b==0) || (a==1 && b==2)){
                ans="YES";
            }
            else{
                ans="NO";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}