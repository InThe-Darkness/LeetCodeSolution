/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    vector<int>& helper(Node *root, vector<int> &ans){   
        for(auto p:root->children)
            helper(p, ans);
        ans.push_back(root->val);
        return ans;
    }

public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root) helper(root, ans);
        return ans;  
    }
};