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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> minH;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp = lists[i];
            while(temp!=NULL)
            {
                minH.push(temp->val);
                temp=temp->next;
            }
        }
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(minH.size()>0)
        {
            ListNode*  curr= new ListNode(minH.top());
            if(head==NULL)
            {
                head=tail=curr;
                minH.pop();
            }
            else
            {
                tail->next=curr;
                tail=curr;
                minH.pop();
            }
        }
        return head;
    }
};