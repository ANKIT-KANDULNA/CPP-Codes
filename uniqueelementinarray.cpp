#include <iostream>
using namespace std;
int findUnique(int arr[],int n){
    int j=0,ans=0;
    while(j<n){
        ans=ans^arr[j];
        j++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],i=0;
    while(i<n){
        cin>>arr[i];
        i++;
    }
    cout<<"Unique element in the list is:"<<findUnique(arr,n);
    return 0;
}