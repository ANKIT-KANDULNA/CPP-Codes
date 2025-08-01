#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    long long sum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=max(sum+a[i],a[i]);
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum<<endl;
    return 0;
}