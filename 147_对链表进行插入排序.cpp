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
    ListNode* insertionSortList(ListNode* head) {
        if(!head) return NULL;
        ListNode *p = head->next, *p1, *pre = head, *pre1;
        for(; p; p = p->next){
            for(p1 = head, pre1 = NULL; p1 != p; pre1 = p1, p1 = p1->next){
                if(p1->val > p->val){
                    pre->next = p->next;
                    p->next = p1;
                    if(!pre1) head = p;
                    else pre1->next = p;
                    p = pre;
                    break;
                }
            }
            pre = p;
        }
        return head;
    }
};