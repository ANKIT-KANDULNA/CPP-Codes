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
            char ch=c+j-1;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}