#include <iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
    if(s>e){
        return 0;
    }
    if(arr[mid]==key){
        return 1;
    }
    else if(arr[mid]>key){
        binarysearch(arr,s,mid-1,key);
    }
    else if(arr[mid]<key){
        binarysearch(arr,mid+1,e,key);
    }
}
int main(){
    int arr[6]={3,5,7,8,9,10};
    int size=6;
    int start=0;
    int end=size-1;
    int key;
    cout<<"enter the key:";
    cin>>key;
    bool ans=binarysearch(arr,start,end,key);
    if(ans==1){
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }
    return 0;
}