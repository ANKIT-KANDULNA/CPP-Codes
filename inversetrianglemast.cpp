#include <iostream>
using namespace std;
int main()
{
    int r,i=1;
    cout<<"Enter no. of rows:";
    cin>>r;
    while(i<=r){
        int j=1,k=1;
        while(j<=r-i+1){
            cout<<"* ";
            j++;
        }
        while(k<=r-i){
            cout<<" ";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}