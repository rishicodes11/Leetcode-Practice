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
    int checkheight(TreeNode* root){
        if(!root) return 0;
        int lefth=checkheight(root->left);
        if(lefth==-1) return -1;

        int righth=checkheight(root->right);
        if(righth==-1) return -1;

        if(abs(lefth-righth)>1) return -1;

        return 1+max(lefth,righth);
    }
    bool isBalanced(TreeNode* root) {
        return checkheight(root)!=-1;
    }
};