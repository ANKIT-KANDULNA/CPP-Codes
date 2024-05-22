#include <iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0,j=0,k=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    while(k<n){
        temp=arr[k+1];
        arr[k+1]=arr[k];
        arr[k]=temp;
        k+=2;
    }
    while(j<n){
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
}