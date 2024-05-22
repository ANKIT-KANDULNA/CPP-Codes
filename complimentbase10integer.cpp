#include <iostream>
using namespace std;
int main()
{
    int n,b=0,i=1,r,c=0,p=1,rem;
    cout<<"Enter a number:";
    cin>>n;
    int o=n;
    while(n!=0){
        r=n%2;
        if(r==1){
            r=0;
        }
        else if(r==0){
            r=1;
        }
        b=b+i*r;
        n/=2;
        i*=10;
    }
    while(b!=0){
        rem=b%10;
        c+=p*rem;
        b/=10;
        p*=2;
    }
    cout<<"Compliment base 10 integer of "<<o<<" is:"<<c;
    return 0;
}