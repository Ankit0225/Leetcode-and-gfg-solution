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
        vector<int> store;
        stack<int> st;
        Node *Curr= head;
        while(Curr!=NULL)
        {
            store.push_back(Curr->data);
            Curr=Curr->next;
        }
        
        for(int i=store.size()-1;i>=0;i--)
        {
            if(st.size() == 0)
            st.push(store[i]);
            else if(st.size()>0 && st.top()<=store[i])
            st.push(store[i]);
        }
        Node *curr=NULL,*tail = NULL;
        while(!st.empty())
        {
            if(curr==NULL)
            {
                curr=tail = new Node(st.top());
            }
            else
            {
                tail -> next = new Node(st.top());
                tail = tail->next;
            }
            st.pop();
        }   
        return curr;
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