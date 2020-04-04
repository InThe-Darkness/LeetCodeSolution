/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        auto p = node;
        while(true){
            p->val = p->next->val;
            if(p->next->next == nullptr){
                delete(p->next);
                p->next = nullptr;
                break;
            }
            p = p->next;
        }
    }
};