class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
        {
            return NULL;
        }

        ListNode *curr = head;
        int count = 0;
        while(curr != NULL)
        {
            count++;
            curr = curr->next;
        }

        if(n == count)
        {
            ListNode *head2 = head->next;
            delete head; 
            return head2;
        }

        int z = count - n;
        int count2 = 1; 
        ListNode *temp = head;
        while(temp != NULL)
        {
            if(count2 == z)
            {
                ListNode *curr2 = temp->next;
                temp->next = curr2->next;
                delete curr2; 
                break;
            }
            else
            {
                count2++;
                temp = temp->next;
            }
        }
        return head;
    }
};
