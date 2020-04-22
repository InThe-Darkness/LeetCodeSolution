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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *ans = head, *temp = head, *temp1 = head;
        while(ans && ans->val == val){
            ans = ans->next;
            delete temp;
            temp = ans;
        }
        while(temp){
            if(temp->val == val){
                temp1->next = temp->next;
                delete temp;
                temp = temp1->next;
                continue;
            }
            temp1 = temp;
            temp = temp->next;   
        }
        return ans;
    }
};