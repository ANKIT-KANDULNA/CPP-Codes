#include <iostream>
using namespace std;
int maxn(int num[],int n){
    int max=INT32_MIN;
    int i=0;
    while(i<n){
        if(num[i]>max){
            max=num[i];
        }
        i++;
    }
    cout<<"Miximum number is:"<<max<<endl;
}
int minn(int num[],int n){
    int min=INT32_MAX;
    int i=0;
    while(i<n){
        if(num[i]<min){
            min=num[i];
        }
        i++;
    }
    cout<<"Minimum number is:"<<min;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int num[n],i=0;
    while(i<n){
        cin>>num[i];
        i++;
    }
    maxn(num,n);
    minn(num,n);
    return 0;
}