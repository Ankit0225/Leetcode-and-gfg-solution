//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverse(Node *head)
    {
        Node *curr=head,*prev=NULL;
        while(curr!=NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *curr = reverse(head);
        int carry=1;
        Node *newhead=NULL,*tail=NULL;
        while(curr!=NULL)
        {
            int sum = curr->data + carry;
            if(sum>=10)
            {
                carry=sum/10;
                sum=sum%10;
            }
            else
            {
                carry=0;
            }
            if(newhead==NULL)
            {
                newhead=tail= new Node(sum); 
            }
            else
            {
                tail->next = new Node(sum);
                tail=tail->next;
            }
            curr=curr->next;
        }
        if(carry>=1)
        {
            if(newhead==NULL)
            {
                newhead=tail=new Node(carry);
            }
            else
            {    
                tail->next =  new Node(carry);
                tail=tail->next;
            }
        }
        head = reverse(newhead);
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
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends