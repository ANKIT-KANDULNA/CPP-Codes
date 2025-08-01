#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int MOD=1e9+7;
/* allows multiple occurences of same item
   agar kisi item ko select krliya toh woh dubara le skte h(unprocessed)
   agar kisi bhi item ko select nhi kiya toh usko dubara nhi le skte(processed)

*/
//recursive
int helperR(int i,int w,vector<int> &val,vector<int> &wt){
    if(i<0 || w==0){
        /* 
        so question arises how to decide base condition
        think of smallest valid input
        */
        return 0; 
    }
    int first=0;
    if(wt[i]<=w){
        first=val[i]+helperR(i,w-wt[i],val,wt);
    }
    int second=helperR(i-1,w,val,wt);
    return max(first,second);
}
// recursion + memoization
int helper(int i,int w,vector<int> &val,vector<int> &wt,vector<vector<int>> &dp){
    if(i<0 || w==0){
        return 0;
    }
    if(dp[i][w]!=-1){
        return dp[i][w];
    }
    int first=0;
    if(wt[i]<=w){
        first=val[i]+helper(i,w-wt[i],val,wt,dp);
    }
    int second=helper(i-1,w,val,wt,dp);
    return dp[i][w]=max(first,second);
}
// pure DP
int unboundedKnapsack(int n, int w, vector<int> &val, vector<int> &wt){
    vector<vector<int>> dp(n+1,vector<int>(w+1,0));
    for(int i=1;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(wt[i-1]<=j){
                dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i][j-wt[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}
/*
Rod Cutting
Coin Change I
Coin Change II
Maximum Ribbon Cut
*/
int main(){
    int n=3;
    int w=10;
    vector<int> val={5,11,13};
    vector<int> wt={2,4,6};
    vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
    helperR(n-1,w,val,wt);
    helper(n-1,w,val,wt,dp);
    cout<<unboundedKnapsack(n,w,val,wt)<<endl;
    return 0;
}