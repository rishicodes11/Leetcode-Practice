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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
      //using deque
      //just keep in mind how u are fillling queue cause we gotta convert the queu into list and push it to ans array
      vector<vector<int>>ans;
      queue<TreeNode*>q;
      if(!root) return ans;
      else q.push(root); 
      
      bool lefttoright=true;

      while(!q.empty()){
        int size=q.size();
        deque<int>level;

        for(int i=0;i<size;i++){
            TreeNode* node=q.front();
            q.pop();

            if(lefttoright){
                level.push_back(node->val); // 1 then 1 2 then 1 2 3 type(l to r)
            }else{
                level.push_front(node->val);//right to left shit 1 then 2 1 then 321
            }

            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        ans.push_back(vector<int>(level.begin(),level.end()));
        lefttoright=!lefttoright;
      } 
      return ans;
    }
};