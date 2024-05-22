#include <iostream>
using namespace std;
int update(int arr[],int n){
    arr[0]=15;
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
    update(arr,n);
    while(j<n){
        cout<<arr[j]<<" ";
        j++;
    }
    return 0;
}