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
    ListNode* middleNode(ListNode* head) {
        int nums = 0;
        ListNode *p = head;
        while(p){ nums++; p = p->next;}

        p = head;
        for(int i = 0; i < nums / 2; i++)
            p = p->next;
        return p;

    }
};


//solution2:
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p1 = head, *p2 = head;
        while(p2->next){
            p1 = p1->next;
            p2 = p2->next;
            if(p2->next) p2 = p2->next;
            else return p1;
        }
        return p1;
    }
};