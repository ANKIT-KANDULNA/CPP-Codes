#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int power(int n){
    if(n==0){
        return 1;
    }
    return 2*power(n-1);
}
void counting(int n){
    if(n==0){
        return;
    }
    counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
    int ans1=power(n);
    cout<<ans1<<endl;
    counting(n);
    return 0;
}