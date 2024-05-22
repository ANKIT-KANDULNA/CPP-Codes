#include <iostream>
using namespace std;
int sum(int c, int d);
int main()
{
    int c,d;
    cout<<"Enter first number:";
    cin>>c;
    cout<<"Enter second number:";
    cin>>d;
    int s=sum(c,d);
    cout<<"Sum is:"<<s<<endl;
    return 0;
}
int sum(int x,int y)
{
    return x+y;
}