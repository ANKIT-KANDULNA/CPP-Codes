#include <iostream>
using namespace std;
int main(){
    //Pointer to a constant
    const int a=5;
    int b=10;
    cout<<a<<endl;
    //a++; // this statement will result in error
    //when given a value to constant then the value can't be modified further
    const int *ptr=&a;
    ptr=&b;
    cout<<*ptr<<endl;

    //Constant Pointer
    int x=100,y=20;
    int *const p=&x;
    //p=y; // this statement will result in error
    cout<<*p<<endl;
    return 0;
}