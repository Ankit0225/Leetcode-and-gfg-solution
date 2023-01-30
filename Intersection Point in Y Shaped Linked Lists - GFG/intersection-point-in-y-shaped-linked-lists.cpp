//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* inputList(int size)
{
    if (size == 0) return NULL;

    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}


// } Driver Code Ends
/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution
{
public:
    int intersectPoint(Node* head1, Node* head2)
    {
        // Your Code Here
        Node *curr1=head1,*curr2=head2;
        int counthead1=0,counthead2=0,diff;
        while(curr1->next!=NULL)
        {
            counthead1++;
            curr1=curr1->next;
        }
        while(curr2->next!=NULL)
        {
            counthead2++;
            curr2=curr2->next;
        }
        
        curr1=head1,curr2=head2;
        if(counthead1>counthead2)
        {
            diff=counthead1-counthead2;
            while(diff--)
            curr1=curr1->next;
        }
        else
        {
            diff=counthead2-counthead1;
            while(diff--)
            curr2=curr2->next;
        }
        
        while(curr1!=NULL && curr2!=NULL)
        {
            if(curr1==curr2)
            {
               return curr1->data; 
            }
             curr1=curr1->next;
             curr2=curr2->next;
            
        }
        return -1;
    }
};



//{ Driver Code Starts.


/* Driver program to test above function*/
int main()
{
    int T, n1, n2, n3;

    cin >> T;
    while (T--)
    {
        cin >> n1 >> n2 >> n3;

        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);

        Node* temp = head1;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;

        temp = head2;
        while (temp != NULL && temp->next != NULL)
            temp = temp->next;
        if (temp != NULL) temp->next = common;
        
        Solution ob;
        cout << ob.intersectPoint(head1, head2) << endl;
    }
    return 0;
}


// } Driver Code Ends