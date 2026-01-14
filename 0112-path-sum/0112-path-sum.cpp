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

    bool helperdfs(TreeNode* root,int currsum, int targetsum){
        if(!root) return false;

        currsum+=root->val;
        if(!root->left && !root->right){
            if(currsum==targetsum) return true;
        }
       return  helperdfs(root->left,currsum,targetsum) || helperdfs(root->right,currsum,targetsum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return helperdfs(root,0,targetSum);
    }
};