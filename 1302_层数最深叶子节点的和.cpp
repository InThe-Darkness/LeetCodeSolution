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
    int deepestLeaves(map<int, int> &mymap, TreeNode *root, int floor){
        if(root->left == NULL && root->right == NULL){
            if(mymap.count(floor)) mymap[floor] += root->val;
            else mymap[floor] = root->val;
            return floor;
        }
        int left = 0, right = 0;
        if(root->left) left = deepestLeaves(mymap, root->left, floor+1);
        if(root->right) right = deepestLeaves(mymap, root->right, floor+1);
        return max(left, right);
    }

    int deepestLeavesSum(TreeNode* root) {
        map<int, int> mymap;
        int deepest;
        if(root){
            deepest = deepestLeaves(mymap, root, 1);
            return mymap[deepest];
        }
        return 0;
    }
};