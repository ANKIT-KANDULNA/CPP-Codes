#include <iostream>
using namespace std;
int getLength(char ch[]){
    int count=0,i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
void reversestring(char str[]){
    int n=getLength(str);
    int s=0;
    int e=n-1;
    while(s<e){
        swap(str[s++],str[e--]);
    }
}
int main(){
    char str[100];
    cout<<"Enter a string:";
    cin>>str;
    reversestring(str);
    cout<<"Reverse of the string is:"<<str;
    return 0;
}