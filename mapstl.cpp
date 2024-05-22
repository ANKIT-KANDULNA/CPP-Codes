#include <iostream>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    //map is always sorted
    m[1]="Ankit";
    m[2]="Kandulna";
    m[13]="DTU";
    m.insert({171,"GOOGLE"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"Finding 13:"<<m.count(13)<<endl;
    cout<<"Finding -13:"<<m.count(-13)<<endl;
    m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}