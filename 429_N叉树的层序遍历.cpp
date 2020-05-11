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
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<vector<Node*>> myqueue;
        vector<Node *> pvector;
        vector<Node *> head;
        head.push_back(root);
        myqueue.push(head);
        int i = 0, num = 1, temp = 0;
        
        while(!myqueue.empty()){
            temp = 0;
            ans.push_back(vector<int>());
            while(num--){
                pvector = myqueue.front();
                myqueue.pop();
                
                //cout<<"head:"<<pvector[0]->val<<" "<<i <<" "<<ans.size()<< " \t:";
                for(auto pp : pvector){
                    ans[i].push_back(pp->val);
                    if(pp->children.size() > 0){
                        myqueue.push(pp->children);
                        temp++;
                    }
                    
                }
                
            }
            i++;
            num = temp;
            //cout<<temp<<" "<<myqueue.size()<<endl;
        }
        return ans;
    }
};