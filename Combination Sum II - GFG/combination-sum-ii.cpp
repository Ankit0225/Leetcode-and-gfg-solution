//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  void combination(int idx,int target,vector<int> &arr,vector<int> &res,vector<vector<int>> &ans)
  {
    
      if(target==0)
      {
          ans.push_back(res);
          return;
      }
      for(int i=idx;i<arr.size();i++)
      {
          if(i>idx && arr[i]==arr[i-1])
          continue;
          if(arr[i]>target)
          break;
          res.push_back(arr[i]);
          combination(i+1,target-arr[i],arr,res,ans);
          res.pop_back();
      }
  }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        // Write your code here
        sort(candidates.begin(),candidates.end());
        vector<int> res;
        vector<vector<int>> ans;
        combination(0,target,candidates,res,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends