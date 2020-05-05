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
    bool isValidBST_(TreeNode *root, int *llimit, int *rlimit){
        if(rlimit && root->val >= *rlimit) return false;
        if(llimit && root->val <= *llimit) return false;
        bool left = true, right = true;
        if(root->left) left = isValidBST_(root->left, llimit, &root->val);
        if(root->right) right = isValidBST_(root->right, &root->val, rlimit);
        return left && right;       
    }

    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        bool left = true, right = true;
        if(root->left) left = isValidBST_(root->left, NULL, &root->val);
        if(root->right) right = isValidBST_(root->right, &root->val, NULL);
        return left && right;
    }
};