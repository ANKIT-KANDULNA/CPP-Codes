#include <iostream>
using namespace std;
int AP(int n);
int AP(int n){
    int i=1;
    cout<<"A.P. is:";
    while(i<=n){
        int ap=3*i+7;
        cout<<ap<<" ";
        i++;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    AP(n);
    return 0;
}