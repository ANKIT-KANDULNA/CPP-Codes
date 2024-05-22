#include <iostream>
using namespace std;
int main()
{
    int N,s=0;
    cout<<"Enter number of terms:";
    cin>>N;
    for(int i=1;i<=N;i++){
        s=s+i;
    }
    cout<<"Sum of "<<N<<" terms is:"<<s;
    return 0;
}