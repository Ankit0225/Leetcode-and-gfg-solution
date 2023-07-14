//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int odd,even;
        stack<int> s1;
        if(sizeOfStack%2==1)
        {
            odd=(sizeOfStack+1)/2;
            for(int i=1;i<=odd;i++)
            {
                s1.push(s.top());
                s.pop();
            }
        }
        else
        {
            even=(sizeOfStack+2)/2;
             for(int i=1;i<=even;i++)
            {
                s1.push(s.top());
                s.pop();
            }
        }
        s1.pop();
        while(s1.empty()==false)
        {
            s.push(s1.top());
            s1.pop();
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends