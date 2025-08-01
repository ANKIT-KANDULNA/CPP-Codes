#include <iostream>
using namespace std;
void update(int &n){
    n=n+2;
}
int main(){
    int i=5;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    cout<<"BEFORE: "<<i<<endl;
    update(i);
    cout<<"AFTER: "<<i<<endl;
    return 0;
}