#include <iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool remainingpart=isSorted(arr+1,size-1);
        return remainingpart;
    }
}
int main(){
    int arr[6]={1,2,5,6,8,12};
    int size=6;
    bool ans=isSorted(arr,size);
    if(ans==1){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}