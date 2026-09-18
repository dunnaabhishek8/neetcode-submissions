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
    void Right(TreeNode*root,vector<int>&ans,int count){
        if(root==NULL){
            return;
        }
        if(ans.size()==count){
            ans.push_back(root->val);
        }

        Right(root->right,ans,count+1);
        Right(root->left,ans,count+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int count=0;
        Right(root,ans,count);

        return ans;
    }
};
