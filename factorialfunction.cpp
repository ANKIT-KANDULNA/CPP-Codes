#include <iostream>
using namespace std;
int factorial(int n);
int factorial(int n){
    int f=1,i=1;
    if(n==0){
        f=1;
    }
    while(i<=n){
        f*=i;
        i++;
    }
    cout<<f;
    return 0;
}
int main()
{
    int n;
    cin>>n;
    factorial(n);
    return 0;
}