#include <iostream>
using namespace std;
int main(){
    char c;
    cin.get(c);
    while(c!='\n'){
        cout<<c;
        cin.get(c); // includes the spaces in the string
    }
    cout<<endl;
    char x;
    x=cin.get();
    while(x!='\n'){
        cout<<x;
        x=cin.get();
    }
    /*char x;
    while(x!='\n'){
        cout<<x;
        cin>>x;
    }*/
    return 0;
}