#include <iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter number of terms:";
    cin>>N;
    int sum=(N*(N+1))/2;
    cout<<"Sum of "<<N<<" terms is:"<<sum;
    return 0;
}