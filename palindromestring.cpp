#include <iostream>
using namespace std;
bool checkPalindrome(string s,int i,int j){
    if(i>j){
        return 1;
    }
    if(s[i]!=s[j]){
        return 0;
    }
    else{
        checkPalindrome(s,i+1,j-1);
    }
}
int main(){
    string s="abcba";
    bool check=checkPalindrome(s,0,s.length()-1);
    if(check){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT PALINDROME";
    }
    return 0;
}