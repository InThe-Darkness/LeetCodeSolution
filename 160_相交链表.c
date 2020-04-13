/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int lenA = 0, lenB = 0;
    struct ListNode *p1 = headA, *p2 = headB;
    while(p1){lenA++; p1 = p1->next;}
    while(p2){lenB++; p2 = p2->next;}
    p1 = headA;
    p2 = headB;
    if(lenA > lenB){
        for(int i = 0; i < lenA - lenB; i++)
            p1 = p1->next;
    }
    else{
        for(int i = 0; i < lenB - lenA; i++)
            p2 = p2->next;
    }
    while(p1 != p2 && p1 && p2){p1 = p1->next; p2 = p2->next;}
    if(p1 != p2)return NULL;
    return p1;
}