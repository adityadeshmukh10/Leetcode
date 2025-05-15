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
    ListNode *detectCycle(ListNode *head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return NULL;
        }    
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(fast == slow)
            {
                return detectNode(head, fast);
            }
            
        }
        return NULL;
    }
    ListNode *detectNode(ListNode *head, ListNode *fast)
    {
        ListNode *curr = head;
        ListNode *temp = fast;

        if(curr == temp)
        {
            return fast;
        }
        else
        {
            while(curr!=temp)
            {
                curr = curr->next;
                temp = temp->next;
            }
        }
        return curr;
    }
};