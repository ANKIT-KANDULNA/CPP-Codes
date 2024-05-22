#include <iostream>
using namespace std;
int main()
{
    int r,c,i=0;
    cout<<"Enter no. of rows:";
    cin>>r;
    cout<<"Enter no. of columns:";
    cin>>c;
    while(r>i){
        int j=0;
        while(c>j){
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}