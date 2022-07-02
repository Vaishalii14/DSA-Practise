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
    int helper(TreeNode*root,int sum){
        if(root==NULL){
            return sum;
        }
        int ans1=helper(root->right,sum);
        ans1+=root->val;
        root->val=ans1;
        int ans2=helper(root->left,ans1);
        return ans2;
    }
    TreeNode* bstToGst(TreeNode* root) {
         int ans=helper(root,0);
        return root;
    }
};