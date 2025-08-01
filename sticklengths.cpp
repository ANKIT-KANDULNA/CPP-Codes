#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int mid=a[n/2];
    long long cost=0;
    for(int i=0;i<n;i++){
        cost+=abs(mid-a[i]);
    }
    cout<<cost<<endl;
    return 0;
}