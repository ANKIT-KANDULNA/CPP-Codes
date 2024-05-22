#include <iostream>
using namespace std;
int main()
{
    int n,i=1,a=1;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=30){
        if(n==a){
            cout<<n<<" is in power of 2.";
            return true;
        }
        a*=2;
    }
    if(n!=a){
        return false;
    }
}