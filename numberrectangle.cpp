#include <iostream>
using namespace std;
int main()
{
    int r,c,i=1;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;
    while(i<=r){
        int j=1;
        while(j<=c){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}