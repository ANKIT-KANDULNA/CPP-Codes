#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>=4){
        if(n%2==0){
            int x=n,y=n-1;
            while(y!=1){
                cout<<y<<" ";
                y-=2;
            }
            cout<<1<<" ";
            while(x!=2){
                cout<<x<<" ";
                x-=2;
            }
            cout<<2<<endl;
        }
        else{
            int x=n,y=n-1;
            while(y!=2){
                cout<<y<<" ";
                y-=2;
            }
            cout<<2<<" ";
            while(x!=1){
                cout<<x<<" ";
                x-=2;
            }
            cout<<1<<endl;
        }
    }
    else{
        if(n==1){
            cout<<1<<endl;
        }
        else{
            cout<<"NO SOLUTION"<<endl;
        }
    }
    return 0;
}