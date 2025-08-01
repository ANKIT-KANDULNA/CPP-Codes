#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if((1LL*n*(n+1)/2)%2==0){
        cout<<"YES"<<endl;
        set<int> set1;
        set<int> set2;
        long long sum=1LL*n*(n+1)/4;
        for(int i=n;i>=1;i--){
            if(i<=sum){
                set1.insert(i);
                sum-=i;
            }
            else{
                set2.insert(i);
            }
        }
        cout<<set1.size()<<endl;
        for(int i:set1){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<set2.size()<<endl;
        for(int i:set2){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}