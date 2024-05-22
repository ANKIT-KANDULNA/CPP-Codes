#include <iostream>
using namespace std;
int findArrayIntersection(int ar1[],int m,int ar2[],int n){
    if(m>n){
        for(int i=0;i<n;i++){
            int element=ar1[i];
            for(int j=0;j<m;j++){
                if(element<ar2[j]){
                    break;
                }
                if(element==ar2[j]){
                    cout<<element<<" ";
                    break;
                }
            }
        }
    }
    if(n>=m){
        for(int i=0;i<m;i++){
            int element=ar1[i];
            for(int j=0;j<n;j++){
                if(element<ar2[j]){
                    break;
                }
                if(element==ar2[j]){
                    cout<<element<<" ";
                    break;
                }
            }
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
