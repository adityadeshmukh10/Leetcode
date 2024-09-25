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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *curr = head;
        int l=0;
        while(curr!=NULL)
        {
            l++;
            curr = curr->next;
        }

        int q = l/k;
        int p = l%k;

        vector<ListNode*> result(k, NULL);
        curr = head;

        ListNode *prev = NULL;
        for(int i=0;i<k;i++)
        {
            result[i]=curr;
            for(int count=1;count<=q+(p>0?1:0);count++)
            {
                prev=curr;
                curr=curr->next;
            }
            if(prev!=NULL)
                prev->next=NULL;
            p--;
        }
        return result;
    }
};