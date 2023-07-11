//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}

struct Node * mergeResult(struct Node *node1,struct Node *node2);

Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }

        struct Node* result = mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends


/*

The structure of linked list is the following

struct Node
{
int data;
Node* next;
};

*/

struct Node * mergeResult(Node *node1,Node *node2)
{
    // your code goes here
    struct Node *curr1=node1,*curr2=node2,*newhead=NULL,*tail=NULL;
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1->data<curr2->data)
        {
            if(newhead==NULL)
            newhead=tail=curr1;
            else
            {
                tail->next=curr1;
                tail=tail->next;
            }
            curr1=curr1->next;
        }
        else
        {
            if(newhead==NULL)
            newhead=tail=curr2;
            else
            {
                tail->next=curr2;
                tail=tail->next;
            }
            curr2=curr2->next;
        }
    }
    while(curr1!=NULL)
    {
        if(newhead==NULL)
        newhead=tail=curr1;
        else
        {
            tail->next=curr1;
            tail=tail->next;
        }
        curr1=curr1->next;
    }
    while(curr2!=NULL)
    {
        if(newhead==NULL)
            newhead=tail=curr2;
        else
        {
            tail->next=curr2;
            tail=tail->next;
        }
        curr2=curr2->next;
    }
    
    struct Node *curr=newhead,*prev=NULL;
    while(curr!=NULL)
    {
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}