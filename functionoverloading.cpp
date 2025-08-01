#include <iostream>
using namespace std;
int area(int s);
int area(int l,int b);
double area(double r);
int area(int s){
    return s*s;
}
int area(int l,int b){
    return l*b;
}
double area(double r){
    return 3.14*r*r;
}
int main(){
    double a1=area(5.5);
    int a2=area(5);
    int a3=area(5,2);
    cout<<"Area of Circle is : "<<a1<<endl;
    cout<<"Area of Square is : "<<a2<<endl;
    cout<<"Area of Rectangle is : "<<a3<<endl;
    return 0;
}