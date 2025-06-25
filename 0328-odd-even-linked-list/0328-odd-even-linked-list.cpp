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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode *curr = head;
        ListNode *temp = head->next;
        ListNode *a = temp;

        while(temp!=NULL && temp->next!=NULL)
        {
            curr->next = temp->next;
            curr = curr->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        curr->next = a;
        return head;
    }
};