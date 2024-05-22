#include <iostream>
using namespace std;
int main()
{
    int n,s=0,p=1,r;
    cout<<"Enter a binary number:";
    cin>>n;
    while(n!=0){
        r=n%10;
        s+=r*p;
        n/=10;
        p*=2;
    }
    cout<<"Decimal number is:"<<s;
    return 0;
}