// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        vector<int> v;
        stack<int> st;
        
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            v.push_back(-1);
            else if(st.size()>0 && st.top()<arr[i])
            v.push_back(st.top());
            else if(st.size()>0 && st.top()>=arr[i])
            {
                while(st.size()>0 && st.top()>=arr[i])
                {
                    st.pop();
                }
                if(st.size()==0)
                v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    } 
};

// { Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}

  // } Driver Code Ends