#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0,e=n-1;
    while(s<n){
        swap(arr[s],arr[e]);
        s++;
        e--;
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
    reverse(arr,n);
    cout<<"Reverse Array is:";
    j=0;
    while(j<n){
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
}