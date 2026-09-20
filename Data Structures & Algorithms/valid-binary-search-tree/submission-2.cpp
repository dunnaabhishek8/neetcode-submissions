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

    bool valid(TreeNode *root,int &prev){
        if(root == NULL){
            return true;
        }
        if(!valid(root->left,prev)){
            return false;
        }

        if(prev != -1){
            if(prev >= root->val){
                return false;
            }
        }
        prev=root->val;
        return valid(root->right,prev);

    }


    
    bool isValidBST(TreeNode* root) {
    
    int prev=-1;
    return valid(root,prev);

    }
};
