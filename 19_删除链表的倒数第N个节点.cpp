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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int nums = 0;
        ListNode *temp = head, *temp1;
        if(n == 0) return head;
        for(ListNode *p = head; p != NULL; p = p->next) nums++;
        if(n == nums){
            temp1 = head;
            head = head->next;
            delete temp1;
        }
        else{
            for(int i = 1; i < nums - n; i++)temp = temp->next;
            temp1 = temp->next;
            temp->next = temp1->next;
            delete temp1;
        }
        return head;
    }
};