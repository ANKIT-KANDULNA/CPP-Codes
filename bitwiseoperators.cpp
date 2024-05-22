#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the first number:";
    cin>>n1;
    cout<<"Enter the second number:";
    cin>>n2;
    cout<<"AND VALUE IS:"<<(n1 & n2)<<endl;
    cout<<"OR VALUE IS:"<<(n1 | n2)<<endl;
    cout<<"XOR VALUE IS:"<<(n1 ^ n2)<<endl;
    cout<<"NOT VALUE OF FIRST NUMBER IS:"<<~n1<<endl;
    cout<<"NOT VALUE OF SECOND NUMBER IS:"<<~n2<<endl;
    cout<<"RIGHT SHIFT VALUE OF FIRST NUMBER IS:"<<(n1>>1)<<endl;
    cout<<"RIGHT SHIFT VALUE OF SECOND NUMBER IS:"<<(n2>>1)<<endl;
    cout<<"LEFT SHIFT VALUE OF FIRST NUMBER IS:"<<(n1<<1)<<endl;
    cout<<"LEFT SHIFT VALUE OF SECOND NUMBER IS:"<<(n2<<1)<<endl;
    return 0;
}