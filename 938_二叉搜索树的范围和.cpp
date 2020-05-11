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
    void helper(TreeNode *root, vector<int> &ans){
        if(!root) return;
        helper(root->left, ans);
        ans.push_back(root->val);
        helper(root->right, ans);
    }
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        vector<int> ans;
        int ret = 0;
        helper(root, ans);
        //for(auto p : ans) cout <<p << " ";
        for(auto p : ans)
            if(p <= R && p >= L) ret += p;
        return ret;
    }
};