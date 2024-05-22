#include <iostream>
using namespace std;
int main()
{
    int n,i=1,c=1;
    cout<<"Enter no. of terms:";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<c<<" ";
            c++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}