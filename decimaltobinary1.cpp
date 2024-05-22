#include <iostream>
using namespace std;
int main()
{
    int d,i=1,b,a=0;
    cout<<"Enter a number:";
    cin>>d;
    cout<<"Binary number of "<<d;
    while(d!=0){
        b=d&1;
        a=(b*i)+a;
        d=d>>1;
        i*=10;
    }
    cout<<" is:"<<a;
    return 0;
}