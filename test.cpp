#include <iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,5};
    int i=0;
    while(i<=6){
        if(arr[i]!=i){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}