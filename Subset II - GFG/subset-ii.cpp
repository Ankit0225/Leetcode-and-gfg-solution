//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    void subsets(int idx,vector<int> &arr,vector<int> &res,vector<vector<int>> &ans)
    {
        ans.push_back(res);
        for(int i=idx;i<arr.size();i++)
        {
            if(idx<i && arr[i]==arr[i-1])
            continue;
            res.push_back(arr[i]);
            subsets(i+1,arr,res,ans);
            res.pop_back();
        }
    }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        sort(nums.begin(),nums.end());
        vector<int> res;
        vector<vector<int>> ans;
        subsets(0,nums,res,ans);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends