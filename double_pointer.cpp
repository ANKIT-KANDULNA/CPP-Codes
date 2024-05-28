#include <iostream>
using namespace std;

void update(int *p){
    p=p+1;
    *p=*p+1;
    //**p=**p+1;
}
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    cout<<*ptr<<endl;
    cout<<**pptr<<endl;

    cout<<ptr<<endl;
    cout<<*pptr<<endl;

    cout<<&ptr<<endl;
    cout<<pptr<<endl;

    int temp=2;
    int *p=&temp;
    int **p2=&p;
    update(p);
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    return 0;
}