#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
int MOD=1e9+7;
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root){
        if(root==NULL){
            return {};
        }
        vector<vector<int>> bfs;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> temp;
            for(int i=0;i<size;i++){
                int node=q.front();
                q.pop();
                if(node->left!=NULL){
                    temp.push_back(node->left->val);
                }
                if(node->right!=NULL){
                    temp.push_back(node->right->val);
                }
            }
            bfs.push_back(temp);
        }
        return bfs;
    }
};
int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    Solution sol;
    int ans=sol.levelOrder(root);
    cout<<ans<<endl;
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int minSwaps(vector<int>& nums) {
    int o = 0, e = 0;
    int n = nums.size();
    for (int num : nums) {
        if (num % 2) {
            o++;
        } else {
            e++;
        }
    }
    if (n % 2 == 0) {
        if (e != o) {
            return -1;
        }
    } else {
        if (abs(e - o) != 1) {
            return -1;
        }
    }
    int se = 0, so = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (nums[i] % 2) {
                se++;
            } else {
                so++;
            }
        }
    }
    if (n % 2 == 0) {
        return min(se, so);
    } else {
        if (e > o) {
            return se;
        } else {
            return so;
        }
    }
}
 auto calc(bool startEven){
            vector<int> tgt;
            for(int i = 0; i < n; i++)
                if ((i % 2 == 0) == startEven)
                    tgt.push_back(i);
            long long cost = 0;
            for(int i = 0; i < m; i++)
                cost += llabs((long long)pos[i] - tgt[i]);
            return cost;
        };
        if (n % 2 == 0)
            return min(calc(true), calc(false));
        return calc(m > o);