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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        auto minnode = [](vector<ListNode*>& lists_){
            int n = lists_.size();
            if(n == 0) return -1;
            int ans = -1;
            for(int i = 0; i < n; i++)
                if(lists_[i]) { ans = i; break;}
            if(ans == -1) return ans;
            for(int i = 1; i < n; i++)
                if(lists_[i] && lists_[i]->val < lists_[ans]->val) ans = i;
            return ans;
        };
        int minindex = minnode(lists);
        if(minindex == -1)return NULL;
        ListNode *ans = lists[minindex];
        lists[minindex] = lists[minindex]->next;
        ListNode *temp = ans;
        while((minindex = minnode(lists)) != -1){
            temp->next = lists[minindex];
            temp = temp->next;
            lists[minindex] = lists[minindex]->next;
        }
        return ans;
    }
};