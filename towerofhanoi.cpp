#include <bits/stdc++.h>
using namespace std;
struct Move{
    int n,src,aux,dest;
};
void recursiveTOH(int n,int a,int b,int c){
    if(n>0){
        recursiveTOH(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        recursiveTOH(n-1,b,a,c);
    }
}
void iterativeTOH(int n,int a,int b,int c){
    stack<Move> stk;
    stk.push({n,a,b,c});
    while(!stk.empty()){
        Move curr=stk.top();
        stk.pop();
        if(curr.n>0){
            stk.push({curr.n-1,curr.aux,curr.src,curr.dest});
            cout<<curr.src<<" "<<curr.dest<<endl;
            stk.push({curr.n-1,curr.src,curr.dest,curr.aux});
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<pow(2,n)-1<<endl;
    recursiveTOH(n,1,2,3);
    cout<<endl;
    iterativeTOH(n,1,2,3);
    return 0;
}