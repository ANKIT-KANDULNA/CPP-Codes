#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int cnt=0;
    vector<int> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int i=0,j=n-1;
    while(i<=j){
        if(p[i]+p[j]<=x){
            cnt++;
            i++;
            j--;
        }
        else if(p[j]<=x){
            cnt++;
            j--;
        }
    }
    cout<<cnt<<endl;
    return 0;
}