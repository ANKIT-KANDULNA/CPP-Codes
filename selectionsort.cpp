#include <iostream>
using namespace std;
int SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
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
    SelectionSort(arr,m);
    return 0;
}