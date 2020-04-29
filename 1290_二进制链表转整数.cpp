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
    int getDecimalValue(ListNode* head) {
        ListNode *p = head;
        unsigned int ans = 0;
        while(p && p->val == 0) p = p->next;
        while(p){
            ans <<= 1;
            if(p->val) ans |= 1;
            p = p->next;
        }
        return ans;
    }
};