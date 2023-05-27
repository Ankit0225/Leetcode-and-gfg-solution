//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
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
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        //add code here.
        vector<int> origin,rev;
        struct Node *curr=head;
        while(curr!=NULL)
        {
            origin.push_back(curr->data);
            rev.push_back(curr->data);
            curr=curr->next;
        }
        int half=origin.size()/2;
        reverse(rev.begin(),rev.end());
        for(int i=0;i<half;i++)
        {
            rev[i]-=origin[i];
        }
        struct Node *newhead=NULL,*newtail=NULL;
        for(int i=0;i<rev.size();i++)
        {
            if(newhead==NULL)
            {
                newhead=newtail= new Node(rev[i]);
            }
            else
            {
                newtail->next= new Node(rev[i]);
                newtail=newtail->next;
            }
        }
        newtail->next=NULL;
        return newhead;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends