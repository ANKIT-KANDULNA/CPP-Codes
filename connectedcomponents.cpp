#include <iostream>
#include <vector>
using namespace std;
void traversal(int node,vector<int> &visited){
    visited[node]=1;
}
int main(){
    int n,e;
    cout<<"Enter the number of nodes:";
    cin>>n;
    cout<<"Enter the number of edges:";
    cin>>e;
    vector<vector<int>> edges(e,vector<int>(2));
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        edges[i][0]=a;
        edges[i][1]=b;
    }
    vector<int> visited(n+1,0);
    for(int i=1;i<visited.size();i++){
        if(!visited[i]){
            traversal(visited[i]);
        }
    }
    return 0;
}