#include <iostream>
using namespace std;
void pairSum(int arr[],int m,int s){
    for(int i=1;i<=m;i++){
        for(int j=i+1;j<=m;j++){
            if(arr[i]+arr[j]==s){
                cout<<"("<<i<<","<<j<<") ";
                break;
            }
        }
    }
}
int main(){
    int m;
    cout<<"Enter the size of 1st Array:";
    cin>>m;
    int arr[m];
    int i=1;
    while(i<=m){
        cin>>arr[i];
        i++;
    }
    cout<<"enter the sum:";
    int s;
    cin>>s;
    cout<<"Pairs whose sum is equal to "<<s<<" is:";
    pairSum(arr,m,s);
    return 0;
}