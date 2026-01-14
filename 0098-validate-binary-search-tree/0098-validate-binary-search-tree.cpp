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
.............................
Checklist says:

If the node is valid,
check left subtree and right subtree,
and both must be true.

Also remember the rule update:

Left child → same min, new max = root->val

Right child → new min = root->val, same max

....................................
 */
class Solution {
public:
    bool dfs(TreeNode* root, long minval, long maxval){
        if(!root) return true;
        if(root->val <=minval || root->val>=maxval) return false;
        // asking children now for left nd right
        return dfs(root->left,minval,root->val) && dfs(root->right,root->val,maxval);
    }

    bool isValidBST(TreeNode* root) {
       return dfs(root,LONG_MIN,LONG_MAX);
    }
};