/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)
        {
            return head;
        }
        
        ListNode *curr = head;
        int count = 0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        if(count == 1)
        {
            return NULL;
        }
        ListNode *temp = head;
        int h = 1;

        while(temp!=NULL)
        {
            if(h == count/2)
            {
                ListNode *curr2 = temp->next;
                temp->next = curr2->next;
                delete curr2;
                break;
            }
            else
            {
                h++;
                temp=temp->next;
            }
        }
        return head;
    }
};