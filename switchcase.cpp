#include <iostream>
using namespace std;
int main()
{
    int num=2;
    cout<<endl;
    switch(num){
        case 1: cout<<"First"<<endl;
            break;
        case 2: cout<<"Second"<<endl;
            break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
    int c1='a';
    cout<<endl;
    switch(c1){
        case 'a': cout<<"First"<<endl;
            break;
        case 'b': cout<<"Second"<<endl;
            break;
        default: cout<<"It is default case"<<endl;
    }
    cout<<endl;
    return 0;
}