#include <iostream>
using namespace std;
int main()
{
    int r,i=0;
    char c='A';
    cout<<"Enter no. of rows:";
    cin>>r;
    while(i<r){
        int j=0;
        while(j<=i){
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        c++;
        i++;
    }
    return 0;
}