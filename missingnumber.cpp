#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n-1);
    long long sum=0;
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long total=1LL*n*(n+1)/2;
    cout<<total-sum<<endl;
    return 0;
}