#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int d,i=0,b,a=0;
    cout<<"Enter a number:";
    cin>>d;
    cout<<"Binary number of "<<d;
    while(d!=0){
        b=d&1;
        a=(b*pow(10,i))+a;
        d=d>>1;
        i++;
    }
    cout<<" is:"<<a;
    return 0;
}