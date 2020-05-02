/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root && root->val == val) return root;
        else if(!root) return NULL;
        TreeNode *left = searchBST(root->left, val);
        TreeNode *right = searchBST(root->right, val);
        return  left ? left : right;
    }
};