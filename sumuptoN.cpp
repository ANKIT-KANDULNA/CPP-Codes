#include <iostream>
using namespace std;
int main()
{
    int i=1,N,sum=0;
    cout<<"Enter number of terms:";
    cin>>N;
    while(i<=N){
        sum=sum+i;
        i++;
    }
    cout<<"Sum of "<<N<<" terms is:"<<sum;
    return 0;
}