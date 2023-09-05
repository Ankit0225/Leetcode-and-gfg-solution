//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Node structure

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
    void rearrangeEvenOdd(Node *&head)
    {
       // Your Code here
       Node *oddhead=NULL ,*oddtail=NULL,*evenhead=NULL,*eventail=NULL;
       Node *curr=head;
       int count = 1;
       while(curr!=NULL)
       {
           if(count%2==0)
           {
               if(evenhead==NULL)
               {
                   evenhead = eventail = new Node(curr->data);
               }
               else
               {
                   eventail -> next = new Node(curr->data);
                   eventail = eventail -> next;
               }
           }
           else
           {
               if(oddhead==NULL)
               {
                   oddhead = oddtail = new Node(curr->data);
               }
               else
               {
                   oddtail -> next = new Node(curr->data);
                   oddtail = oddtail -> next;
               }
           }
           count++;
           curr=curr->next;
       }
       if(oddhead == NULL)
       {
           head = evenhead;
       }
       else
       {
           oddtail -> next = evenhead;
           head = oddhead;
       }
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }
        Solution ob;
        ob.rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends