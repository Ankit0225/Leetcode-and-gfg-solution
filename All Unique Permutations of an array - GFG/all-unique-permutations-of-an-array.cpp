//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void uniquepermutations(int idx,vector<int> &arr,vector<vector<int>> &ans,int n)
    {
        if(idx==n)
        {
            ans.push_back(arr);
            return;
        }
        unordered_map<int,bool> mp;
        for(int i=idx;i<n;i++)
        {
            if(mp.find(arr[i])==mp.end())
            {
               mp[arr[i]]=1;
               swap(arr[idx],arr[i]);
               uniquepermutations(idx+1,arr,ans,n);
               swap(arr[idx],arr[i]);
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int> arr ,int n) {
        // code here
        vector<int> res;
        vector<vector<int>> ans;
        uniquepermutations(0,arr,ans,n);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends