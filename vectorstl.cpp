#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.push_back(5);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Element at 2nd index:"<<v.at(2)<<endl;
    cout<<"Empty or not:"<<v.empty()<<endl;
    cout<<"First element:"<<v.front()<<endl;
    cout<<"Last element:"<<v.back()<<endl;
    cout<<"Before pop:";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.pop_back();
    cout<<"After pop:";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Before clearing the vector:"<<endl;
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    v.clear();
    cout<<"After clearing the vector:"<<endl;
    cout<<"Size:"<<v.size()<<endl;
    cout<<"Capacity:"<<v.capacity()<<endl;
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
    return 0;
}