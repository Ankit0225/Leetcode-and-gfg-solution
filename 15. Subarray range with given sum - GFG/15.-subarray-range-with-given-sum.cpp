// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to count the number of subarrays which adds to the given sum.
    int subArraySum(int arr[], int n, int sum)
    {
        //Your code here
        int count=0,pre_sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            pre_sum+=arr[i];
            if(pre_sum==sum)
            count++;
            if(mp.find(pre_sum-sum)!=mp.end())
            count+=mp[pre_sum-sum];
            mp[pre_sum]++;
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
	    Solution obj;
	    cout<<obj.subArraySum(arr, n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends