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
int main(){
    power();
    return 0;
}