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

    // bool valid(TreeNode *root,int prev){
    //     if(root == NULL){
    //         return true;
    //     }
    //      valid(root->left,prev);
    //     if(prev != -1){
    //         if(prev >= root->val){
    //             return false;
    //         }
    //     }
    //     prev=root->val;
    //     return valid(root->right,prev);

    // }

    void vec(TreeNode *root,vector<int>&ans){
        if(root == NULL){
            return ;
        }

        vec(root->left,ans);
        ans.push_back(root->val);
        vec(root->right,ans);
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int>ans;
        vec(root,ans);
        
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]){
                return false;
            }
        }
        return true;

    }
};
