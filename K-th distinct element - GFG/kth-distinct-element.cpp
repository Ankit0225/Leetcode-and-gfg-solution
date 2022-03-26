// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int KthDistinct(vector<int>nums,int k){
		    // Code here.
		    unordered_map<int,int> mp;
		    for(int i=0;i<nums.size();i++)
		    mp[nums[i]]++;
		  //  vector<int> v;
		    for(auto i : nums)
		    {
		        if(mp[i]==1)
		        k--;
		        if(k==0)
		        return i;
		    }
		    return -1;
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans  = ob.KthDistinct(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends