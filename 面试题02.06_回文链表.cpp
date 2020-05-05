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
    bool isPalindrome(ListNode* head) {
        ListNode *p1 = head;
        vector<int> sta;
        while(p1){sta.push_back(p1->val); p1 = p1->next;}
        for(int l = 0, r  =sta.size() - 1; l < r; l++, r--)
            if(sta[l] != sta[r]) return false;
        return true;
    }
};