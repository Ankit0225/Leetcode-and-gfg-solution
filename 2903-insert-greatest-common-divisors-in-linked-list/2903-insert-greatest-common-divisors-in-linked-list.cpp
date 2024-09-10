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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *prev = NULL,*curr = head;
        while(curr!=NULL)
        {
            prev = curr;
            curr = curr->next;
            if(curr!=NULL)
            {
                int val = __gcd(prev->val,curr->val);
                ListNode *temp = new ListNode(val);
                prev->next = temp;
                temp->next = curr;
            }
        }
        return head;
    }
};