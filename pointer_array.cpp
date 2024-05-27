#include <iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"Adress of first memory block is: "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Adress of first memory block is: "<<&arr[0]<<endl;

    cout<<"0th: "<<*arr<<endl;
    cout<<*arr+2<<endl;
    cout<<"1st: "<<*(arr+1)<<endl;

    //we get, arr[i]=*(arr+i) and i[arr]=*(i+arr)
    int i=9;
    cout<<i[arr]<<endl;
    cout<<*(i+arr)<<endl;

    int temp[10]={1,2,3,4,5};
    cout<<sizeof(temp)<<endl;
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(*temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    cout<<&temp[0]<<endl;
    cout<<temp<<endl;
    cout<<&temp<<endl;

    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    char ch[6]="abcde";
    cout<<arr<<endl;
    cout<<ch<<endl;
    return 0;
}