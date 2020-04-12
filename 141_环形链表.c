/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if(head == NULL ) return false;
    struct ListNode *pos1 = head, *pos2 = head->next;
    while(pos1 != pos2){
        if(pos2 == NULL)break;
        pos1 = pos1->next;
        if(pos2->next) pos2 = pos2->next->next;
        else {
            pos2 = pos2->next;
            break;
        }
    }
    if(pos1 == pos2) return true;
    return false;
}