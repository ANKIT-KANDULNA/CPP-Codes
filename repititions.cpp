#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int maxi=0,i=0,j=0;
    while(j<s.length()){
        if(s[j]==s[i]){
            maxi=max(maxi,j-i+1);
            j++;
        }
        else{
            i=j;
        }
    }
    cout<<maxi<<endl;
    return 0;
}