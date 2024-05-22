#include <iostream>
#include <queue>
using namespace std;
int main(){
    priority_queue<int> max_heap;
    priority_queue<int,vector<int>,greater<int>> min_heap;
    max_heap.push(1);
    max_heap.push(2);
    max_heap.push(3);
    max_heap.push(4);
    int n=max_heap.size();
    for(int i=0;i<n;i++){
        cout<<max_heap.top()<<" ";
        max_heap.pop();
    }cout<<endl;
    min_heap.push(5);
    min_heap.push(0);
    min_heap.push(4);
    min_heap.push(2);
    int m=min_heap.size();
    for(int i=0;i<m;i++){
        cout<<min_heap.top()<<" ";
        min_heap.pop();
    }cout<<endl;
    cout<<"Khaali hai kya bhai?:"<<min_heap.empty();
    return 0;
}