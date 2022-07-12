// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        for(auto i : mp){
        minH.push({i.second,i.first});
        if(minH.size()>k)
            minH.pop();
        }
        while(minH.size()>0)
        {
            v.push_back(minH.top().second);
            minH.pop();
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends