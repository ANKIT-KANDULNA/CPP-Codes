#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=((end-start)/2)+start;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=((end-start)/2)+start;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    cout<<"Enter elements:";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element you want to search:";
    cin>>x;
    int result=binarysearch(arr,n,x);
    cout<<x<<" found at index "<<result;
    return 0;
}