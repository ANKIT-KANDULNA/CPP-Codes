#include <iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3];
    cout<<"Enter the elements of first matix:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(int k=0;k<3;k++)
    {
        for(int l=0;l<3;l++)
        {
            cin>>b[k][l];
        }
    }
    cout<<"New Matrix:"<<endl;
    for(int m=0;m<3;m++)
    {
        for(int n=0;n<3;n++)
        {
            c[m][n]=a[m][n]+b[m][n];
            cout<<c[m][n]<<" ";
        }
        cout<<endl;
    }
    return 0;
}