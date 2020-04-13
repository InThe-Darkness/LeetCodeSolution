/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    if(root->left && root->right == NULL) return 1 + minDepth(root->left);
    if(root->left == NULL && root->right) return 1 + minDepth(root->right);
    int left = 1 + minDepth(root->left);
    int right = 1 + minDepth(root->right);
    return left < right ? left : right;
}