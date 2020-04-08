/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        ListNode ans,temp,temp1;
        if(l1 == null && l2 == null) return null;
        if(l1 == null && l2 != null) return l2;
        if(l1 != null && l2 == null) return l1;
        if(l1.val < l2.val){
            ans = l1;
            l1 = l1.next;
        }else{
            ans = l2;
            l2 = l2.next;
        }
        temp1 = ans;
        while(l1 != null && l2 != null){
            if(l1.val < l2.val){
                temp = l1.next;
                temp1.next = l1;
                l1 = temp;
            }
            else{
                temp = l2.next;
                temp1.next = l2;
                l2 = temp;
            }
            temp1 = temp1.next;
        }
        if(l1 != null) temp1.next = l1;
        if(l2 != null) temp1.next = l2;
        return ans;
    }
}