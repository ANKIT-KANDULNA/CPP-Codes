#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    if(n==0 || n==1){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    BubbleSort(arr,n-1);
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
    BubbleSort(arr,m);
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}