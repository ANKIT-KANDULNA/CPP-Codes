#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long> a(n);
    set<long long> distinct;
    for(int i=0;i<n;i++){
        cin>>a[i];
        distinct.insert(a[i]);
    }
    cout<<distinct.size()<<endl;
    return 0;
}