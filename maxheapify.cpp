#include <iostream>
using namespace std;
int PARENT(int i){
    return (i-1)/2;
}
int LEFT(int i){
    return 2*i+1;
}
int RIGHT(int i){
    return 2*i+2;
}
void MAX_HEAPIFY(int A[],int i,int n){
    int l=LEFT(i);
    int r=RIGHT(i);
    int largest=i;
    if(l<n && A[l]>A[i]){
        largest=l;
    }
    if(r<n && A[r]>A[largest]){
        largest=r;
    }
    if(largest!=i){
        swap(A[i],A[largest]);
        MAX_HEAPIFY(A,largest,n);
    }
}
void PrintArray(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={27,17,3,16,13,10,1,5,7,12,4,8,9,6};
    int n=(sizeof(A)/sizeof(A[0]));
    MAX_HEAPIFY(A,2,n);
    PrintArray(A,n);
    return 0;
}