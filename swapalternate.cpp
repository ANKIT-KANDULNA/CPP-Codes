#include <iostream>
using namespace std;
void sawpalt(int arr[],int n){
    int i=0;
    while(i<n){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        i=i+2;
    }
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0,j=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    sawpalt(arr,n);
    cout<<"After swapping alternate elements:";
    while(j<n){
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
}