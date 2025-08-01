#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int MOD=1e9+7;

// nCk = n-1Ck + n-1Ck-1; --> Pascal Equality
// submission i=0 to n (nCi)^2 = 2nCn


/*
    Fermat's little theorem:
    for prime numbers
    a^p ---(congruent) a mod p
    a^p-1 ---(congruent) 1 mod p   --> a=2, p=5 --> 16(a^p-1) --- 1 % 5
*/
int main(){
    fastio();
    vector<vector<int>> C(n,vector<int>(n));
    for(int i=0;i<n;i++){
        C[i][0]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;
        }
    }
    return 0;
}