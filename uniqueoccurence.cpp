#include <iostream>
using namespace std;
bool uniqueOccurrences(int arr[],int m){
    int c[m]={0};
    int i=0;int j=0;
    while(i<m){
        c[arr[i]]++;
        i++;
    }
    while(j<m){
        if(c[j]!=0){
            if(c[j+1]==c[j]){
                return 0;
            }
        }
        j++;
    }
    return 1;
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
    int x=uniqueOccurrences(arr,n);
    if(x==1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}