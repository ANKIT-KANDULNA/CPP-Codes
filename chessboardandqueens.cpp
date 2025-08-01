#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int main(){
    fastio();
    vector<vector<char>> board(8,vector<int>(8));
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>board[i][j];
        }
    }
    
    return 0;
}