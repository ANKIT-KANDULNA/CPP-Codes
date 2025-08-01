#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
class DisjointSet{
    vector<int> rank,parent,size;
public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findParent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }
    void UnionByRank(int u,int v){
        int ultpar_u=findParent(u);
        int ultpar_v=findParent(v);
        if(ultpar_u==ultpar_v){
            return;
        }
        if(rank[ultpar_u]<rank[ultpar_v]){
            parent[ultpar_u]=ultpar_v;
        }
        else if(rank[ultpar_u]>rank[ultpar_v]){
            parent[ultpar_v]=ultpar_u;
        }
        else{
            parent[ultpar_u]=ultpar_v;
            rank[ultpar_v]++;
        }
    }
    void UnionBySize(int u,int v){
        int ultpar_u=findParent(u);
        int ultpar_v=findParent(v);
        if(size[ultpar_u]<size[ultpar_v]){
            parent[ultpar_u]=ultpar_v;
            size[ultpar_v]+=size[ultpar_u];
        }
        else{
            parent[ultpar_v]=ultpar_u;
            size[ultpar_u]+=size[ultpar_v];
        }
    }
};
int main(){
    fastio();
    DisjointSet DS(7);
    DS.UnionBySize(1,2);
    DS.UnionBySize(2,3);
    DS.UnionBySize(4,5);
    DS.UnionBySize(6,7);
    DS.UnionBySize(5,6);
    // if 3 and 7 belong to same component or not
    for(int i=1;i<=7;i++){
        cout<<i<<" "<<DS.findParent(i)<<endl;
    }
    if(DS.findParent(3)==DS.findParent(7)){
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
    
    DS.UnionBySize(3,7);
    if(DS.findParent(3)==DS.findParent(7)){
        cout<<"SAME"<<endl;
    }
    else{
        cout<<"NOT"<<endl;
    }
    return 0;
}