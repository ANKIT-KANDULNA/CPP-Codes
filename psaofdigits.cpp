//product minus addition of digits of digits
#include <iostream>
using namespace std;
int main()
{
    int n,p=1,s=0;
    cout<<"Enter the number:";
    cin>>n;
    while(n>0){
        int d=n%10;
        s+=d;
        p*=d;
        n/=10;
    }
    cout<<"Difference between Product and Addition of digits is:"<<p-s;
    return 0;
}