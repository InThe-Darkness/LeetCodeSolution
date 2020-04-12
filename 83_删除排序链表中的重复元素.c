/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL) return NULL;
    struct ListNode *pos1 = head, *pos2 = head->next;
    struct ListNode *temp = pos1;
    while(pos1){
        while(pos2){
            if(pos1->val == pos2->val){
                temp->next = pos2->next;
                free(pos2);
                pos2 = temp->next;
            }
            else{
                temp = pos2;
                pos2 = pos2->next;
            }
        }
        pos1 = pos1->next;
        if(pos1){
            pos2 = pos1->next;
            temp = pos1;
        }
    }
    return head;
}


//solution 2:
struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL) return NULL;
    struct ListNode *pos1 = head, *pos2 = head->next;
    while(pos2){
        while(pos2 && pos2->val == pos1->val)pos2 = pos2->next;
        pos1->next = pos2;
        pos1 = pos2;
        if(pos2) pos2 = pos2->next;
    }
    return head;
}