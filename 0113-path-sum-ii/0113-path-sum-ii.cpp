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
    void helper(TreeNode* root, int currsum, int targetsum, vector<int>&path,vector<vector<int>>& ans){
        if(!root) return;
        path.push_back(root->val);
        currsum+=root->val;

        if(!root->left && !root->right){
            if(currsum==targetsum){
                ans.push_back(path);
            }
        }
        helper(root->left,currsum,targetsum,path,ans);
        helper(root->right,currsum,targetsum,path,ans);

        path.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>path;
        helper(root,0,targetSum,path,ans);
        return ans;
        
    }
};