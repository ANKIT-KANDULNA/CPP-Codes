#include <iostream>
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
int main(){
    int n;
    cout<<"Enter the size of the stirng:";
    cin>>n;
    char str[n];
    cout<<"Entere the string:";
    cin>>str;
    if(palindrome(str,n)==1){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}