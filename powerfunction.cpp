#include <iostream>
using namespace std;
int power();
int power()
{
    int a,b;
    cout<<"Enter base:";
    cin>>a;
    cout<<"Enter power:";
    cin>>b;
    int ans=1,i=1;
    while(i<=b){
        ans=ans*a;
        i++;
    }
    cout<<a<<" to power "<<b<<" is:"<<ans;
    return 0;
}
long long binPowR(long long a,long long n){
    if(n==0){
        return 1;
    }
    long long ans=binPowR(a,n/2);
    if(n%2){
        return ans*ans*a;
    }
    else{
        return ans*ans;
    }
}
long long binPowI(long long a,long long n){
    long long ans=1;
    while(n>0){
        if(n&1){
            ans*=a;
        }
        a*=a;
        n>>=1;
    }
    return ans;
}
int main(){
    //power();
    long long ans=binPowI(3,13);
    cout<<ans<<endl;
    return 0;
}