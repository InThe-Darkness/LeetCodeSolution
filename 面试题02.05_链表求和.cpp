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
    ListNode* addTwoNumbers_(ListNode* l1, ListNode* l2, int tag) {
        if(!l1 && !l2 && !tag) return NULL;
        ListNode *ans = new ListNode(tag);
        if(l1) ans->val += l1->val;
        if(l2) ans->val += l2->val;
        tag = ans->val / 10;
        ans->val %= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
        ans->next = addTwoNumbers_(l1, l2, tag);
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return addTwoNumbers_(l1, l2, 0);
    }
};



//solution2:
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int tag = 0;
        ListNode* ans = new ListNode(0);
        ListNode* p = ans, *pre;
        do {
            if (l1) p->val += l1->val, l1 = l1->next;
            if (l2) p->val += l2->val, l2 = l2->next;
            tag = p->val / 10;
            p->val %= 10;
            p->next = new ListNode(tag);
            pre = p;
            p = p->next;
        } while (l1 || l2);
        if (!p->val) {
            pre->next = NULL;
            delete p;
        }
        return ans;
    }
};