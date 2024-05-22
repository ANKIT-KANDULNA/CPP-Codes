#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    l.erase(l.begin());
    cout<<"After erase:"<<l.size()<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    list<int> n(l);
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;
    list<int> x(5,100);
    for(int i:x){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}