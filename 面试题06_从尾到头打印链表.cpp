class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> ans;
        ListNode *p = head;
        while(p){
            ans.insert(ans.begin(), p->val);
            p = p->next;
        }
        return ans;
    }
};

//solution2:
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if (!head) return vector<int>();
        vector<int> temp = reversePrint(head->next);
        temp.push_back(head->val);
        return temp;
    }
};