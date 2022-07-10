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
    bool helper(TreeNode *p1, TreeNode* p2){
        if(p1==NULL and p2==NULL){
            return true;
        }
        if(p1==NULL or p2==NULL){
            return false;
        }
        if(p1->val!=p2->val){
            return false;
        }
        int ans1=helper(p1->left,p2->right);
        int ans2=helper(p1->right,p2->left);
        if(ans1 and ans2){
            return true;
        }
        else{
            return false;    
        }
        
    }
    bool isSymmetric(TreeNode* root) {
        return helper(root->left,root->right);
    }
};