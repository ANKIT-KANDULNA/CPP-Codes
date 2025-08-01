#include <iostream>
using namespace std;
int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    char c='a';
    cout<<sizeof(c)<<endl;
    char *ch=new char;
    *ch='q';
    cout<<sizeof(ch)<<endl;
    int n;
    cin>>n;
    int *arr=new int[n]; //this is good practice for a dynamic memory allocation of an array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=getSum(arr,n);
    cout<<"Sum is: "<<ans;
    delete arr;
    return 0;
}