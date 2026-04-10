/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head == null){
            return null;
        }
        ListNode curr = head;
        int count = 0;
        while(curr!=null){
            count++;
            curr = curr.next;
        }
        if(n == count){
            return head.next;
        }
        int count2 = 0;
        ListNode temp = head;
        while(temp!=null){
            count2++;
            if(n == count - count2){
                
                ListNode temp2 = temp.next;
                temp.next = temp.next.next;
                temp2.next = null;
                return head;
            }
            temp = temp.next;
        }
        return null;
    }
}