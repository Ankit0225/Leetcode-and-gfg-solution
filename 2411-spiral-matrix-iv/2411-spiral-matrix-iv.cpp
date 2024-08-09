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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));

        int top = 0, bottom = m - 1,left = 0, right = n - 1,i=0;
        ListNode *curr = head;
        while(curr!= NULL && top <= bottom && left <= right)
        {
            // left to right
            i = left;
            while(curr!=NULL && i<=right)
            {
                ans[top][i] = curr->val;
                curr = curr->next;
                i++;
            }
            top++;

            // top to bottom 
            i=top;
            while(curr!=NULL && i<=bottom)
            {
                ans[i][right] = curr->val;
                curr = curr->next;
                i++;
            }
            right--;

            // right to left;
            if(curr != NULL && top <= bottom)
            {
                i = right;
                while(curr != NULL && i>=left)
                {
                    ans[bottom][i] = curr->val;
                    curr = curr->next;
                    i--;
                }
                bottom--;
            }

            // bottom to top
            if(curr != NULL && left <= right)
            {
                i = bottom;
                while(curr != NULL && i>=top)
                {
                    ans[i][left] = curr->val;
                    curr = curr->next;
                    i--;
                }
                left++;
            }
        }

        return ans;
    }
};