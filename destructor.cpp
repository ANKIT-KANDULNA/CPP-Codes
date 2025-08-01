#include <iostream>
using namespace std;
class test{
    int *A;
public:
    test(int size){
        A=new int[size];
        cout<<"New Array created"<<endl;
    }
    ~test(){
        delete A;
        cout<<"Array deleted"<<endl;
    }
};
int main(){
    int size=5;
    test t1(size);
    return 0;
}