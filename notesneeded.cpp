#include <iostream>
using namespace std;
int main()
{
    int n,notes;
    cout<<"Enter Amount:";
    cin>>n;
    switch(0){
        case 0: 
            notes=n/2000;
            cout<<"Notes of 2000 rupees required:"<<notes<<endl;
            n%=2000;
        case 1: 
            notes=n/1000;
            cout<<"Notes of 1000 rupees required:"<<notes<<endl;
            n%=1000;
        case 2:
            notes=n/500;
            cout<<"Notes of 500 rupees required:"<<notes<<endl;
            n%=500;
        case 3:
            notes=n/200;
            cout<<"Notes of 200 rupees required:"<<notes<<endl;
            n%=200;
        case 4: 
            notes=n/100;
            cout<<"Notes of 100 rupees required:"<<notes<<endl;
            n%=100;
        case 5:
            notes=n/50;
            cout<<"Notes of 50 rupees required:"<<notes<<endl;
            n%=50;
        case 6:
            notes=n/20;
            cout<<"Notes of 20 rupees required:"<<notes<<endl;
            n%=20;
        case 7: 
            notes=n/10;
            cout<<"Notes of 10 rupees required:"<<notes<<endl;
            n%=10;
        case 8:
            notes=n/5;
            cout<<"Notes of 5 rupees required:"<<notes<<endl;
            n%=5;
        case 9:
            notes=n/2;
            cout<<"Notes of 2 rupees required:"<<notes<<endl;
            n%=2;
        case 10:
            notes=n/1;
            cout<<"Notes of 1 rupee required:"<<notes<<endl;
            n%=1;
    }
    return 0;
}