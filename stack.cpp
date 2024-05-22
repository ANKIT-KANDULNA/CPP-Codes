#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"Top element:"<<s.top()<<endl;;
    cout<<"Is empty:"<<s.empty();
    return 0;
}