// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int subArraySum(int arr[], int n, int sum)
    {
    	//code here.
    	int count=0,prefix=0;
    	unordered_map<int,int> mp;
    	for(int i=0;i<n;i++)
    	{
    	    prefix+=arr[i];
    	    if(prefix==sum)
    	    count++;
    	    if(mp.find(prefix-sum)!=mp.end())
    	    count+=mp[prefix-sum];
    	    mp[prefix]++;
    	    
    	}
    	return count;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>sum;
	    Solution ob;
	    cout<<ob.subArraySum(arr, n, sum);
	    cout<<'\n';
	}
	return 0;
}  // } Driver Code Ends