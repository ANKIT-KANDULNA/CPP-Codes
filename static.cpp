#include <iostream>
using namespace std;
class item{
    static int count;
    int number;
public:
    void getData(int a){
        number=a;
        count++;
    }
    void getCount(){
        cout<<"Count : "<<count<<endl;
    }
};
class test{
    int code;
    static int count;
public:
    void setcode(){
        code=++count;
    }
    void showcode(){
        cout<<"Object Number : "<<code<<endl;
    }
    static void showcount(){
        cout<<"Count : "<<count<<endl;
    }
};
int item::count;
int test::count;
int main(){
    item a,b,c;
    a.getCount();
    b.getCount();
    c.getCount();

    a.getData(100);
    b.getData(200);
    c.getData(300);

    a.getCount();
    b.getCount();
    c.getCount();

    test t1,t2;
    t1.setcode();
    t2.setcode();

    test::showcount();
    test t3;
    t3.setcode();

    test::showcount();
    t1.showcode();
    t2.showcode();
    t3.showcode();
    return 0;
}