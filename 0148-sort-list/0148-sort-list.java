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
    public ListNode sortList(ListNode head) {
        if(head == null){
            return null;
        }
        ArrayList<Integer> ar = new ArrayList<Integer>();
        ListNode curr = head;

        while(curr!=null){
            ar.add(curr.val);
            curr = curr.next;
        }
        Collections.sort(ar);
        int p=0;
        ListNode temp = head;
        while(temp!=null && p<ar.size()){
            temp.val = ar.get(p);
            temp = temp.next;
            p++;
        }
        return head;

    }
}