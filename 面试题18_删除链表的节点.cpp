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
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode *p = head, *p1;
        if(p->val == val) {
            head = head->next;
        }
        else{
            do{
                p1 = p;
                p = p->next;              
            }while(p && p->val != val);
            if(p){
                p1->next = p->next;
            }
        }
        return head;
    }
};