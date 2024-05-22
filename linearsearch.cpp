#include <iostream>
using namespace std;
bool search(int arr[],int n,int x){
    int i=0;
    while(i<n){
        if(x==arr[i]){
            return 1;
        }
        i++;
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0,j;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Enter the nuber to be searched:";
    cin>>j;
    bool found=search(arr,n,j);
    if(found){
        cout<<"Number is present";
    }
    else{
        cout<<"Number not found";
    }
    return 0;
}