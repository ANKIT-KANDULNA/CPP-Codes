#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    // Your code here
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int m;
    cout<<"Enter the size of 1st Array:";
    cin>>m;
    int arr[m];
    int i=0;
    while(i<m){
        cin>>arr[i];
        i++;
    }
    cout<<"Sorted array is:";
    bubbleSort(arr,m);
    printArray(arr,m);
    return 0;
}