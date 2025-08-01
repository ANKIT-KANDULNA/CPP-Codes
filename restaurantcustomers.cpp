#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt=0,ans=0;
    int i=0,j=0;
    while(i<n && j<n){
        if(a[i]<b[j]){
            cnt++;
            ans=max(ans,cnt);
            i++;
        }
        else{
            cnt--;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}