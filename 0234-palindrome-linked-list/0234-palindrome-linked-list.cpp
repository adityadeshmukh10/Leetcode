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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        if(head == NULL)
        {
            return true;
        }
        ListNode *curr = head;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        vector<int> vt;
        for(int i=0;i<v.size();i++)
        {
            vt.push_back(v[i]);
        }
        reverse(vt.begin(),vt.end());

        if(vt == v)
        {
            return true;
        }
        return false;
    }
};