/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 //temp2 temp3 指向要交换的两个节点 temp1指向已交换节点的最后一个节点 temp4指向未交换的第一个节点
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode *ans;
        ListNode *temp1 = head, *temp2 = head->next, *temp3, *temp4;
        if(temp2 == NULL) return head;
        temp3 = temp2->next;
        temp2->next = temp1;
        temp1->next = temp3;
        ans = temp2;
        while(1){
            temp4 = temp1;
            temp1 = temp1->next;
            if(temp1)temp2 = temp1->next;
            else return ans;
            if(temp2 == NULL) return ans;
            temp3 = temp2->next;
            temp2->next = temp1;
            temp1->next = temp3;
            temp4->next = temp2;
        }
        return ans;
        
    }
};