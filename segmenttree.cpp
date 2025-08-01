#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
const int MOD=1e9+7;
const long long INF=1e18+7;
/*
ANKIT KANDULNA
*/
/*
Segment tree is an efficient data structure that allows:   
    1) Efficient querying of Intervals/Range
    2) Efficient updating of Intervals/Range

Example: Range sum queries, Range maximum/minimum queries, etc;
-->It is a balanced binary tree

-->2 Children for all non-leaf nodes

-->No single child for any node and no children for leaf nodes

Number of nodes<=2*N, where N=size of array, 
    if N=2, 4, 6, 8 like in power of two then Number of nodes=2*N
    else Number of nodes<=2*N 

root => i=0, l=0, r=n-1
buildTree(i,l,r):
    if(l==r):
        return nums[l]
    mid=(l+r)/2;
    buildTree(2*i+1,l,mid)
    buildTree(2*i+2,mid+1,r);
    segTree[i]=segTree[2*i+1]+segTree[2*i+2] (for range sum query)

Time Complexity: O(n)
Space Complexity: log2(n)(recursion)+segTree array(2*n)
*/
void buildTree(int i,int l,int r,vector<int> &a,vector<int> &segTree){
    if(l==r){
        segTree[i]=a[l];
        return;
    }
    int mid=(l+r)/2;
    buildTree(2*i+1,l,mid,a,segTree);
    buildTree(2*i+2,mid+1,r,a,segTree);
    segTree[i]=segTree[2*i+1]+segTree[2*i+2];
}
int main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        int n=4;
        vector<int> a={3,1,2,7};
        vector<int> segTree(2*n,0);
        buildTree(0,0,n-1,a,segTree);
        for(int i=0;i<2*n;i++){
            if(segTree[i]!=0){
                cout<<segTree[i]<<" ";
            }
        }
    }
    return 0;
}