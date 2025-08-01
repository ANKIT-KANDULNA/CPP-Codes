#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s1,string &s2){
    reverse(s1.begin(),s1.end());
    return s1==s2;
}
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> freq;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
    }
    string ans;
    string s1,s2,s3;
    int cnt=0;
    for(auto it:freq){
        if(it.second%2==1){
            cnt++;
        }
    }
    for(auto it:freq){
        if(it.second%2==1){
            char c=it.first;
            int size=it.second;
            while(size--){
                s3+=c;
            }
        }
        else{
            char c=it.first;
            int size=it.second/2;
            while(size--){
                s1+=c;
                s2+=c;
            }
        }
    }
    reverse(s2.begin(),s2.end());
    ans=s1+s3+s2;
    string temp=ans;
    (isPalindrome(ans,temp)==1) && (cnt<=1) ? cout<<ans<<endl : cout<<"NO SOLUTION"<<endl;
    return 0;
}