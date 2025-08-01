#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int palindrome(char str[],int n){
    int i=0;
    while(i<(n/2+1) && str[i]==str[n-1]){
        i++;
        n--;
        return 1;
    }
    return 0;
}
pair<long long,long long> limits(long long n){
    if(n==1){
        return {1,9};
    }
    long long start=1;
    for(int i=1;i<n;i++){
        start*=10;
    }
    long long end=start*10-1;
    return {start,end};
}
vector<long long> makePalindrome(long long len){
    vector<long long> ans;
    /*
    (len+1)/2 start
    and append reverse except first reverse digit
    */
    long long halfLen=(len+1)/2;
    /*
    10 .... 99 even 
    1000 .... 9999
    */
    auto [start,end]=limits(halfLen);
    for(long long i=start;i<=end;i++){
        string s=to_string(i),temp=s;
        reverse(s.begin(),s.end());
        if(len%2){
            temp+=s.substr(1);
        }
        else{
            temp+=s;
        }
        ans.push_back(stoll(temp));
    }
    return ans;
}
int main(){
    // int n;
    // cout<<"Enter the size of the stirng:";
    // cin>>n;
    // char str[n];
    // cout<<"Entere the string:";
    // cin>>str;
    // if(palindrome(str,n)==1){
    //     cout<<"Palindrome";
    // }
    // else{
    //     cout<<"Not Palindrome";
    // }
    vector<long long> ans=makePalindrome(3);
    cout<<ans.size()<<endl;
    return 0;
}