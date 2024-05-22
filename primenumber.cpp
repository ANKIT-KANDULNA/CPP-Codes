#include <iostream>
using namespace std;
int main()
{
    int N;
    bool p=1;
    cout<<"Enter a number:";
    cin>>N;
    for(int i=2;i<N;i++){
        if(N%i==0){
            p=0;
            break;
        }
    }
    if(p==1){
        cout<<N<<" is a Prime Number";
    }
    else{
        cout<<N<<" is not a Prime Number";
    }
    return 0;
}