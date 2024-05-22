#include <iostream>
using namespace std;
void tripletsSum(int arr[],int m,int s){
    for(int i=1;i<=m;i++){
        for(int j=i+1;j<=m;j++){
            for(int k=j+1;k<=m;k++){
                if(arr[i]+arr[j]+arr[k]==s){
                    cout<<"("<<i<<","<<j<<","<<k<<") ";
                    break;
                }
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
    cout<<"Triplets whose sum is equal to "<<s<<" is:";
    tripletsSum(arr,m,s);
    return 0;
}