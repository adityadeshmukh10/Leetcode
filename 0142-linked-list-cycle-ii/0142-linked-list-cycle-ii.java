public class Solution {
    public ListNode detectCycle(ListNode head) {
        if (head == null || head.next == null) {
            return null;
        }
        
        ListNode fast = head;
        ListNode slow = head;
        
        // Phase 1: Detect if cycle exists
        while (fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            
            if (fast == slow) {
                // Cycle detected! Now find the start
                // Phase 2: Find cycle start
                ListNode entry = head;
                while (entry != slow) {
                    entry = entry.next;
                    slow = slow.next;
                }
                return entry;  // or return slow, they're at same position
            }
        }
        
        return null;  // No cycle
    }
}