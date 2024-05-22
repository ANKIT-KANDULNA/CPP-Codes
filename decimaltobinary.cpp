#include <iostream>
using namespace std;
int main()
{
    int d,r,i=1,b=0;
    cout<<"Enter a number:";
    cin>>d;
    cout<<"Binary number of "<<d;
    while(d!=0){
        r=d%2;
        b=b+i*r;
        d/=2;
        i*=10;
    }
    cout<<" is:"<<b;
    return 0;
}