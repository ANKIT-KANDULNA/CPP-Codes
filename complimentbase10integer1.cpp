#include <iostream>
using namespace std;
int main()
{
    int n,m=n,mask=0;
    cout<<"Enter a number:";
    cin>>n;
    if(n==0){
        cout<<"Compliment base 10 integer of "<<n<<" is:1";
    }
    while(m!=0){
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int a=((~n) & mask);
    cout<<"Compliment base 10 integer of "<<n<<" is:"<<a;
    return 0;
}