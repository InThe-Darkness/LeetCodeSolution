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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL) return NULL;
        ListNode *p1 = head, *p2 = head, *p3 = head;
        p1 = p1->next;
        p2 = p2->next;
        if(p2) p2 = p2->next;
        while(p2 && p1 != p2){
            //cout << p2->val << " " << p3->val<<endl;
            p1 = p1->next;
            p2 = p2->next;
            if(p2) p2 = p2->next;
        }
        if(p2 == NULL) return NULL;
        while(p3 != p2){
            //cout << p2->val << " " << p3->val<<endl;
            p2 = p2->next;
            p3 = p3->next;
        }
        return p2;
    }
};