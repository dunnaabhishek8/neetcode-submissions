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
    
    TreeNode* ancestor(TreeNode* root, TreeNode* p, TreeNode* q,TreeNode* ans){
            if(root == NULL){
                return NULL;
            }

            if(root->val < p->val && root->val < q->val){
                return ancestor(root->right,p,q,ans);
            }
            else if(root->val > p->val && root->val > q->val){
                return ancestor(root->left,p,q,ans);
            }
            else{
             ans=root;
            }
            return ans;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {       TreeNode* ans;
        return ancestor(root,p,q,ans);
    }
};
