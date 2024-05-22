#include <iostream>
using namespace std;
int main()
{
    int n,c=0,r;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Number of '1' bits in "<<n;
    while(n!=0){
        if(n%2==1){
            c++;
        }
        n/=2;
    }
    cout<<" is:"<<c;
    return 0;
}