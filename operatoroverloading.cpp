#include <iostream>
using namespace std;
class sign{
    int a,b,c;
public:
    void setData(){
        cin>>a>>b>>c;
    }
    void getData(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    void operator- (){
        a=-a;
        b=-b;
        c=-c;
    }
};
int main(){
    sign S;
    S.setData();
    S.getData();
    -S;
    S.getData();
    return 0;
}