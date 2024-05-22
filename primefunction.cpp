#include <iostream>
using namespace std;
bool isPrime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }
    return 0;
}