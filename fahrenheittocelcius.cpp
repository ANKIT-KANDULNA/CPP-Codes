#include <iostream>
using namespace std;
int main()
{
    float F,C;
    cout<<"Enter the temperature(F):";
    cin>>F;
    C=(F-32)*5/9;
    cout<<"Temperature(C) is:"<<C;
    return 0;
}