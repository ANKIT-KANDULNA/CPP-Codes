#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> distinct;
    int len=1,i=0,j=0;
    while(j<n){
        while(distinct.find(a[j])!=distinct.end()){
            distinct.erase(a[i]);
            i++;
        }
        distinct.insert(a[j]);
        len=max(len,j-i+1);
        j++;
    }
    cout<<len<<endl;
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int> distinct;
    int len=1,i=0,j=0;
    while(j<n){
        while(distinct.find(a[j])!=distinct.end()){
            distinct.erase(a[i]);
            i++;
        }
        distinct.insert(a[j]);
        len=max(len,j-i+1);
        j++;
    }
    cout<<len<<endl;
    return 0;
}
*/