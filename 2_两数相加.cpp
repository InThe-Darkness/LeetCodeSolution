/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
思路:每个链表既然存储的都是逆序的数字，那么直接将两个链表从头到尾相加就行了
    1：考虑是否有链表全是0，如果有则过滤掉
    2：考虑两个链表长度不等的情况
    3：考虑进位的情况，在每一次相加打的时候还要加上上一次的进位，初始为0
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *p1 = l1, *p2 = l2;
        int tag = 0;

        while(l1 && l1->val == 0)l1 = l1->next;
        while(l2 && l2->val == 0)l2 = l2->next;
        if(l1) l1 = p1;
        if(l2) l2 = p2;

        p1 = ans, p2 = NULL;
        while(l1 && l2){
            tag = l1->val + l2->val + tag;
            p1->val = tag % 10;
            tag /= 10;
            p1->next = new ListNode(0);
            p2 = p1;
            p1 = p1->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1){
            tag = l1->val + tag;
            p1->val = tag % 10;
            tag /= 10;
            p1->next = new ListNode(0);
            p2 = p1;
            p1 = p1->next;
            l1 = l1->next;
        }
        while(l2){
            tag = l2->val + tag;
            p1->val = tag % 10;
            tag /= 10;
            p1->next = new ListNode(0);
            p2 = p1;
            p1 = p1->next;
            l2 = l2->next;
        }
        if(tag) p1->val = tag;
        else if(p2){
            p2->next = NULL;
            delete p1;
        }

        return ans;
    }
};