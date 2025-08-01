#include <iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
}
int main(){
    int arr[6]={3,5,7,8,9,10};
    int size=6;
    int key;
    cout<<"enter the key:";
    cin>>key;
    bool ans=linearsearch(arr,size,key);
    if(ans==1){
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";
    }
    return 0;
}