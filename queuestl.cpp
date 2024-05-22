#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Ankit");
    q.push("Kandulna");
    q.push("DTU");
    cout<<"Front element:"<<q.front()<<endl;
    q.pop();
    cout<<"Front element:"<<q.front()<<endl;
    cout<<"Size of stack:"<<q.size()<<endl;
    cout<<"Empty or not:"<<q.empty()<<endl;
    return 0;
}