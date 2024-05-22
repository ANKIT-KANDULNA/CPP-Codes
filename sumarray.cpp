#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0,j=0,sum=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    while(j<n){
        sum+=arr[j];
        j++;
    }
    cout<<"Sum of all numbers is:"<<sum;
    return 0;
}