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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1 = headA, *p2 = headB;
        if(p1 == NULL || p2 == NULL)return NULL;
        while(p1->next) p1 = p1->next;
        while(p2->next) p2 = p2->next;
        if(p1 != p2) return NULL;
        p1 = headA;
        p2 = headB;
        while(p1 != p2){
            p1 = p1->next == NULL? headB: p1->next;
            p2 = p2->next == NULL? headA: p2->next;
        }
        return p1;
    }
};