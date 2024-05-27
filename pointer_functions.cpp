#include <iostream>
using namespace std;
void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    p=p+1;
    *p=*p+1;
    cout<<"Inside : "<<p<<endl;
}
int getsum(int arr[],int n){
    // *arr=arr[]
    //cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int value=3;
    int *p=&value;
    print(p);
    cout<<p<<endl;
    update(p);
    cout<<p<<endl;
    cout<<*p<<endl;

    int arr[5]={1,2,3,4,5};
    int ans=getsum(arr,5);
    cout<<ans<<endl;
    return 0;
}