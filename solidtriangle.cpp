#include <iostream>
using namespace std;
int main()
{
    int r,i=0;
    cout<<"Enter no. of rows:";
    cin>>r;
    while(i<r){
        int j=0;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}