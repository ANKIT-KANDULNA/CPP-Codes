#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"value of n is: ";
    cin>>n;
    if(n>0)
    {
        cout<<"n is positive"<<endl;
    }
    else
    {
        if(n=0)
        {
            cout<<"n is neither positive nor negative"<<endl;
        }
        else
        {
            cout<<"n is negative"<<endl;
        }
    }
    return 0;
}