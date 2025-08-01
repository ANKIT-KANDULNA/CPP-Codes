#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long moves=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            moves+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
    }
    cout<<moves<<endl;
    return 0;
}