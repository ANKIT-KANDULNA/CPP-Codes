#include <iostream>
using namespace std;
int main()
{
    int n,a=0,o=n;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        int d=n%10;
        if(a>INT32_MAX/10 || a<INT32_MIN/10){
            return 0;
        }
        a=a*10+d;
        n/=10;
    }
    cout<<"Reverse of "<<o<<" is:"<<a;
    return 0;
}