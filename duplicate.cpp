#include <iostream>
using namespace std;
int findDuplicate(int arr[],int m){
    int ans=0,i=0,j=1;
    while(i<m){
        ans=ans^arr[i];
        i++;
    }
    while(j<m){
        ans=ans^j;
        j++;
    }
    return ans;
}
int main(){
    int n,i=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    while(i<n){
        cin>>arr[i];
        i++;
    }
    int x=findDuplicate(arr,n);
    cout<<"Duplicate element in the array is:"<<x;
    return 0;
}