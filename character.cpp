#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character:";
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<"This is a UPPERCASE alphabet"<<endl;
    }
    else if(c>='a' && c<='z'){
        cout<<"This is a LOWERCASE alphabet"<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<"This is a NUMBER"<<endl;
    }
    return 0;
}