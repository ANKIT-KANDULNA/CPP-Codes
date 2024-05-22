#include <iostream>
using namespace std;
int findArrayIntersection(int ar1[],int m,int ar2[],int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(ar1[i]==ar2[j]){
            cout<<ar1[i]<<" ";
            i++;
            j++;
        }
        else if(ar1[i]<ar2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
int main(){
    int m;
    cout<<"Enter the size of 1st Array:";
    cin>>m;
    int ar1[m];
    int i=0;
    while(i<m){
        cin>>ar1[i];
        i++;
    }
    int n;
    cout<<"Enter the size of 2nd Array:";
    cin>>n;
    int ar2[n];
    int j=0;
    while(j<n){
        cin>>ar2[j];
        j++;
    }
    cout<<"Intersection of arrays is:";
    findArrayIntersection(ar1,m,ar2,n);
    return 0;
}
