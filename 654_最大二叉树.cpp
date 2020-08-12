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
    TreeNode *helper(int s, int e, vector<int>& nums){
        if(s == e) return nullptr;
        int index = s;
        for(int i = s; i < e; i++) if(nums[i] > nums[index]) index = i;
        TreeNode *root = new TreeNode(nums[index]);
        root->left = helper(s, index, nums);
        root->right = helper(index + 1, e, nums);
        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return helper(0, nums.size(), nums);
    }
};