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
        if(root==NULL){
            return {};
        }
        vector<vector<int>> ans;
        queue<TreeNode*>pending;
        int flag=0;
        //flag=0--->l->r
        //flag=1--->r->l
        pending.push(root);
        pending.push(NULL);
        while(!pending.empty()){
            vector<int>smallAns;
            while(pending.front()!=NULL){
                TreeNode* topNode=pending.front();
                smallAns.push_back(topNode->val);
                if(topNode->left){
                    pending.push(topNode->left);
                }
                if(topNode->right){
                   pending.push(topNode->right); 
                }
                pending.pop();
            }
            if(pending.front()==NULL){
                pending.pop();
                if(!pending.empty()){
                    pending.push(NULL);
                }
                
            }
            if(flag==1){
                reverse(smallAns.begin(),smallAns.end());
            }
            flag=!flag;
            ans.push_back(smallAns);
            
        }
        return ans;
    }
};