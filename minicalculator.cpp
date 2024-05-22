#include <iostream>
using namespace std;
int main()
{
    int a,b;
    char ch;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<"Enter operator:";
    cin>>ch;
    switch(ch){
        case '+': cout<<(a+b);
            break;
        case '-': cout<<(a-b);
            break;
        case '*': cout<<(a*b);
            break;
        case '/': cout<<(a/b);
            break;
        case '%': cout<<(a%b);
            break;
        default: cout<<"Enter a valid operator";
    }
    return 0;
}