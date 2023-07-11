//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node *curr=head;
        vector<int> v;
        while(curr!=NULL)
        {
            v.push_back(curr->data);
            curr=curr->next;
        }
        stack<int> st;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(st.size()==0)
            st.push(v[i]);
            else if(st.size()>0 && st.top()<=v[i])
            st.push(v[i]);
        }
        Node *newhead=NULL,*tail=NULL;
        while(!st.empty())
        {
           if(newhead==NULL)
           newhead=tail=new Node(st.top());
           else
           {
               tail->next = new Node(st.top());
               tail=tail->next;
           }
           st.pop();
        }
        return newhead;
    }
    
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends