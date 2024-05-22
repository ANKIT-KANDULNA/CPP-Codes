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
int main(){
    char ch[100];
    cout<<"Enter a string:";
    cin>>ch;
    cout<<"Length of the string is:"<<getLength(ch);
    return 0;
}