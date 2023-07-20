//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void combinations(int idx,int k,int n,vector<vector<int>> &ans,vector<int> ds)
    {
        if(idx>10)
        {
            return;
        }
        if(ds.size()==k && n==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=idx;i<=9;i++)
        {
            ds.push_back(i);
            combinations(i+1,k,n-i,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<vector<int>> ans;
        vector<int> ds;
        combinations(1,K,N,ans,ds);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends