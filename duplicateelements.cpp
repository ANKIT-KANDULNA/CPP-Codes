#include <iostream>
using namespace std;
int findDuplicates(int arr[],int n){
    int c[100]={0},i=0,j=0;
    while(i<n){
        c[arr[i]]++;
        i++;
    }
    while(j<n){
        if(c[j]==2){
            cout<<c[j]<<" ";
        }
        j++;
    }
}
int main(){
    int n,i=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Duplicate elements in the array are:";
    cout<<findDuplicates(arr,n);
    return 0;
}