#include <iostream>
using namespace std;
int main()
{
    int f=0,s=1,n,t;
    cout<<"Enter no. of terms:";
    cin>>n;
    cout<<f<<" "<<s<<" ";
    for(int i=1;i<=n-2;i++){
        t=f+s;
        cout<<t<<" ";
        f=s;
        s=t;
    }
    return 0;
}