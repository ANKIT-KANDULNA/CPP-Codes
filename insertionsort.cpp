#include <iostream>
using namespace std;
void InsertionSort(int A[],int n){
    /*for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }*/
    for(int i=1;i<n;i++){
        int key=A[i];
        int j=i-1;
        for(;j>=0;j--){
            if(A[j]>key){
                A[j+1]=A[j];
            }
        }
        A[j+1]=key;
    }
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
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
    InsertionSort(arr,m);
    return 0;
}