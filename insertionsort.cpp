#include <iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
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