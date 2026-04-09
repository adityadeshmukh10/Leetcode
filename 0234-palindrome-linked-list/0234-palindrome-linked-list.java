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
    public boolean isPalindrome(ListNode head) {
        if(head == null){
            return true;
        }
        ArrayList<Integer> ar = new ArrayList<Integer>();
        ListNode curr = head;

        while(curr!=null){
            ar.add(curr.val);
            curr = curr.next;
        }
        int m = ar.size();
       for(int i = 0; i < m; i++) {
    if(ar.get(i) != ar.get(m - i - 1)) {
        return false;
    }
}
        return true;
    }
}