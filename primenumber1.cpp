#include <iostream>
using namespace std;
int main()
{
    int N,i=2;
    bool p=1;
    cout<<"Enter a number:";
    cin>>N;
    while(i<N){
        if(N%i==0){
            p=0;
            break;
        }
        i++;
    }
    if(p==1){
        cout<<N<<" is a Prime Number";
    }
    else{
            cout<<N<<" is not a Prime Number";
    }
    return 0;
}