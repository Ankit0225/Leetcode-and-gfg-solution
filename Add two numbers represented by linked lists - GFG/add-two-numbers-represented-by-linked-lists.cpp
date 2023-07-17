//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    Node* rev(Node* head)
    {
        Node *curr=head,*prev=NULL;
        while(curr!=NULL)
        {
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        first = rev(first);
        second = rev(second);
        int carry=0;
        Node *head=NULL,*tail=NULL;
        while(first!=NULL && second!=NULL)
        {
            int sum = first->data + second->data + carry;
            if(sum>=10)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
            {
                carry=0;
            }
            if(head==NULL)
            {
                head = tail = new Node(sum);
            }
            else
            {
                tail->next = new Node(sum);
                tail=tail->next;
            }
            first=first->next;
            second=second->next;
        }
        while(first!=NULL)
        {
            int sum = first->data + carry;
            if(sum>=10)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
            {
                carry=0;
            }
            if(head==NULL)
            {
                head=tail=new Node(sum);
            }
            else
            {
                tail->next = new Node(sum);
                tail=tail->next;
            }
            first=first->next;
        }
        while(second!=NULL)
        {
            int sum = second->data + carry;
            if(sum>=10)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
            {
                carry=0;
            }
            if(head==NULL)
            {
                head=tail = new Node(sum);
            }
            else
            {
                tail->next = new Node(sum);
                tail=tail->next;
            }
            second=second->next;
        }
        if(carry>=1)
        {
            tail->next = new Node(carry);
            tail=tail->next;
        }
        head = rev(head);
        return head;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends