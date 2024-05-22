#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(11);
    cout<<"Front of Queue is:"<<q.front()<<endl;
    cout<<"Rear of Queue is:"<<q.back()<<endl;
    q.push(15);
    cout<<"Front of Queue is:"<<q.front()<<endl;
    cout<<"Rear of Queue is:"<<q.back()<<endl;
    q.push(13);
    cout<<"Front of Queue is:"<<q.front()<<endl;
    cout<<"Rear of Queue is:"<<q.back()<<endl;
    cout<<"Size of Queue is:"<<q.size()<<endl;
    q.pop();
    cout<<"Size of Queue is:"<<q.size()<<endl;
    if(q.empty()){
        cout<<"Queue is Empty.";
    }
    else{
        cout<<"Queue is not empty.";
    }
    return 0;
}