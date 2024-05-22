#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age:";
    cin>>age;

    if (age>=18)
    {
        cout<<"Adult\nYou can vote\nYou can drive\n";
    }
    else if(age>=13 && age<18)
    {
        cout<<"Teenager\n";
    }
    else
    {
        cout<<"Child";
    }
    cout<<"THANK YOU!!";
    return 0;
}