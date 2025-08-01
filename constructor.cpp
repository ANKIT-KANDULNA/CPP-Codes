#include <iostream>
using namespace std;
class integer{
    int m,n;
public:
    integer();
    integer(int x,int y);
    integer(integer &I);
    void showData(){
        cout<<"m: "<<m<<" "<<"n: "<<n<<endl;
    }
};
integer::integer(){
    m=0;
    n=0;
}
integer::integer(int x,int y){
    m=x;
    n=y;
}
integer::integer(integer &I){
    m=I.m;
    n=I.n;
}
int main(){
    integer I1;
    integer I2(10,20);
    integer I3(I2);
    I1.showData();
    I2.showData();
    I3.showData();
    return 0;
}