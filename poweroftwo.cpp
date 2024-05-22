#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int i=1;
    cout<<"Enter a number:";
    cin>>n;
    while(i<=30){
        if(n==pow(2,i)){
            cout<<n<<" is in power of 2.";
            return true;
        }
        i++;
    }
    return false;
}