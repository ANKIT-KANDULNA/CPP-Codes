#include <iostream>
using namespace std;
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
    return f;
}
int nCr(int n,int r);
int nCr(int n,int r){
    int num=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    int ans=num/deno;
    cout<<"Answer is:"<<ans;
}
int main()
{
    int a,b;
    cout<<"Enter n:";
    cin>>a;
    cout<<"Enter r:";
    cin>>b;
    nCr(a,b);
    return 0;
}