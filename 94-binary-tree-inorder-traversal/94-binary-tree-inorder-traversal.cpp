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
    vector<int> inorderTraversal(TreeNode* root) {
      if(root==NULL){
          return {};
      } 
        
        vector<int> leftRoot=inorderTraversal(root->left);
        leftRoot.push_back(root->val);
        vector<int> rightRoot=inorderTraversal(root->right);
        for(int i=0;i<rightRoot.size();i++){
            leftRoot.push_back(rightRoot[i]);
        }
        
        return leftRoot;
    }
};