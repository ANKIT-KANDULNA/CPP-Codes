#include <iostream>
using namespace std;
int main()
{
    int i=1,N,sum=0;
    cout<<"Enter number of terms:";
    cin>>N;
    while(i<=N){
        if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<"Sum of all even terms upto "<<N<<" is:"<<sum;
    return 0;
}