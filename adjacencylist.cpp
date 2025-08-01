#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,e;
    cout<<"Enter the number of nodes:";
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>e;
	vector<vector<int>> adj(n+1);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n+1;i++){
        cout<<i<<" --> ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}