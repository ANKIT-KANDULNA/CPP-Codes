#include <iostream>
using namespace std;
int main()
{
    int r,i=1;
    char c='A';
    cout<<"Enter no. of rows:";
    cin>>r;
    while(i<=r){
        int j=1;
        while(j<=r){
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        c++;
        i++;
    }
    return 0;
}