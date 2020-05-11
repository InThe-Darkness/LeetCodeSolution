/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    vector<ListNode *> & helper(TreeNode *tree, int dep, vector<ListNode *> &ve){
        if(ve.size() < dep + 1)
            ve.push_back(new ListNode(tree->val));
        else{
            ListNode *p = new ListNode(tree->val);
            p->next = ve[dep];
            ve[dep] = p;
        }
        if(tree->right) helper(tree->right, dep + 1, ve);
        if(tree->left) helper(tree->left, dep + 1, ve);
        return ve;
    }
public:
    vector<ListNode*> listOfDepth(TreeNode* tree) {
        vector<ListNode *> ans;
        if(!tree) return ans;
        return helper(tree, 0, ans);
    }
};