#include <iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    //address of num is
    cout<<&num<<endl;
    //making a pointer
    int *ptr=&num;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    double d=4.3;
    double *p=&d;
    cout<<p<<endl;
    cout<<*p<<endl;

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;

    //pointer to int is created and pointing to some garbage address
    //it is bad practice
    int *p1;
    cout<<*p1<<endl;
    //int *p2=0;
    //cout<<*p2<<endl;

    int i=9;
    int *p0=0;
    p0=&i;
    cout<<p0<<endl;
    cout<<*p0<<endl;

    cout<<num<<endl;
    (*ptr)++;
    cout<<num<<endl;

    int *a=ptr;
    cout<<ptr<<" "<<a<<endl;
    cout<<*ptr<<" "<<*a<<endl;

    int *t=&i;
    (*t)++;//<---Brackets are necessary
    cout<<*t<<endl;
    *t=*t+1;
    cout<<*t<<endl;
    t=t+1;
    cout<<t<<endl;//the address increased by size of pointer to int
    return 0;
}