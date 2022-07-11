// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
    	// your code here
    	vector<int> v;
    	priority_queue<int,vector<int>,greater<int>> minH;
    	for(int i=0;i<n;i++)
    	{
    	    minH.push(arr[i]);
    	    if(minH.size()<k)
    	    v.push_back(-1);
    	    else if(minH.size()==k)
    	    {
    	        v.push_back(minH.top());
    	    }
    	    else if(minH.size()>k)
    	    {
    	        minH.pop();
    	        v.push_back(minH.top());
    	    }
    	  cout<<v[i]<<" ";    
    	}
    	
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k, n;
		cin>>k>>n;
	    
	    int arr[n];
	    for(int i = 0; i<n ; ++i)
	        cin>>arr[i];
        Solution ob;
	    ob.kthLargest(arr, n, k);
	    cout<<endl;
	    
	    
	}
	return 0;
}
  // } Driver Code Ends