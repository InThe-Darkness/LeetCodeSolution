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
    void flatten(TreeNode* root) {
        if(!root) return;
        TreeNode *temp = root->right;
        if(root->left) {
            flatten(root->left);
            root->right = root->left;
            root->left = nullptr;
        }
        if(temp){
            flatten(temp);
            TreeNode *p = root->right;
            if(p != temp){
                while(p->right) p = p->right;
                p->right = temp;
            }
        }
    }
};