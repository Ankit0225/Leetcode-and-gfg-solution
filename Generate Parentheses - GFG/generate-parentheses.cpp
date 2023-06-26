//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void parenthesis(int open,int close,string &bracket,vector<string> &ans,int n)
    {
        if(open==n && close==n)
        {
            ans.push_back(bracket);
            return;
        }
        if(open<n)
        {
            bracket.push_back('(');
            parenthesis(open+1,close,bracket,ans,n);
            bracket.pop_back();
        }
        if(close<open)
        {
            bracket.push_back(')');
            parenthesis(open,close+1,bracket,ans,n);
            bracket.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
        string bracket;
        vector<string> ans;
        parenthesis(0,0,bracket,ans,n);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends