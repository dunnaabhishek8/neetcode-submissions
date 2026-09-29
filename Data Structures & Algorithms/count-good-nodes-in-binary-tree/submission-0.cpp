
class Solution {
public:

    void ans(TreeNode* root, int maxi, int &count) {
        if (root == NULL) {
            return;
        }

        // Current node is good
        if (root->val >= maxi) {
            count++;
        }

        // Maximum for the current path
        maxi = max(maxi, root->val);

        ans(root->left, maxi, count);
        ans(root->right, maxi, count);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;

        ans(root, root->val, count);

        return count;
    }
};

