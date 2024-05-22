#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,s=0,p=0,r;
    cout<<"Enter a binary number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        s+=r*pow(2,p);
        n/=10;
        p++;
    }
    cout<<"Decimal number is:"<<s;
    return 0;
}