#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0,j=n;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Rverse Array is:";
    while(j-1>=0){
        cout<<arr[j-1]<<" ";
        j--;
    }
    return 0;
}