#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,e;
	cout<<"Enter the number of nodes:";
	cin>>n;
	cout<<"Enter the number of edges:";
	cin>>e;
	vector<vector<int>> adj(n + 1, vector<int>(n + 1, 0));
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}