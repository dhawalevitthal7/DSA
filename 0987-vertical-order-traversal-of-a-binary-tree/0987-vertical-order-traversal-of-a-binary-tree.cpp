/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,map<int,multiset<int>>> mp;
    void dfs(TreeNode* node, int col, int row){
        if(node == NULL) return;
        mp[col][row].insert(node->val);
        dfs(node->left,col-1,row+1);
        dfs(node->right,col+1,row+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root,0,0);
        vector<vector<int>> ans;
        for(auto& colpair:mp){
            vector<int> col;
            for(auto& rowpair:colpair.second){
                col.insert(col.end(),rowpair.second.begin(),rowpair.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};