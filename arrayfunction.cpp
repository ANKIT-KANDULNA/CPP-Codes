#include <iostream>
using namespace std;
void printArray(int arr[],int n){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"Printing done";
}
int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printArray(arr,n);
    return 0;
}