#include <iostream>
using namespace std;
void reverse(string &s,int i,int j){
    if(i>j){
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(s,i,j);
}
int main(){
    string s="abcde";
    int size=5;
    int i=0;
    int j=size-1;
    reverse(s,i,j);
    cout<<s;
    return 0;
}