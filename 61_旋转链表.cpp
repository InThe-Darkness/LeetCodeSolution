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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return NULL;
        ListNode *ans, *temp = head;
        int n = 0;
        while(temp){n++; temp = temp->next;}
        k %= n;
        if(k == 0)return head;

        temp = head;
        for(int i = 0; i < n - 1; i++){
            if(n - k - 1 == i){
                ans = temp->next;
                temp->next = NULL;
                temp = ans;
                continue;
            }
            temp = temp->next;
        }
        temp->next = head;
        return ans;
    }
};