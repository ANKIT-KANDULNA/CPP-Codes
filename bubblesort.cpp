#include <iostream>
using namespace std;
void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
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
    BubbleSort(arr,m);
    return 0;
}