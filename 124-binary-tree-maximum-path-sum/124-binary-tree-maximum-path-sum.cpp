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
    int helper(TreeNode *root, int &maxsum){
        if(root==NULL){
            return 0;
        }
        int leftsum=helper(root->left,maxsum);
        int rightsum=helper(root->right,maxsum);
        if(leftsum<0){
            leftsum=0;
        }
        if(rightsum<0){
            rightsum=0;
        }
        maxsum=max(maxsum,root->val+leftsum+rightsum);
        return root->val+max(leftsum,rightsum);
    }
    int maxPathSum(TreeNode* root) {
        int maxsum=INT_MIN;
        int ans=helper(root,maxsum);
        return maxsum;
    }
    
};