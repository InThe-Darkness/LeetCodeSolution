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
    int kthToLast(ListNode* head, int k) {
        ListNode *p = head, *p1 = head;
        while(k){k--; p1 = p1->next;}
        while(p1){
            p = p->next;
            p1 = p1->next;
        }
        return p->val;
    }
};