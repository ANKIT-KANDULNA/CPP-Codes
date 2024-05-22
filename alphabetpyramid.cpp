#include <iostream>
using namespace std;
int main()
{
    int r;
    cout<<"Enter no. of rows:";
    cin>>r;
    for(int i=1;i<=r;i++)
    {
        for(int k=r-i;k>=1;k--)
        {
            cout<<" ";
        }
        int a=65;
        for(int j=1;j<=2*i-1;j++)
        {
            char ch=static_cast<char>(a);
            cout<<ch<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}