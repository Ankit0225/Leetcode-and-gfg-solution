//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
        // code here
        int mod = 1e9+7;
        vector<vector<long long int>> dp(m,vector<long long int>(n,0));
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i == 0 && j == 0)
                dp[i][j] = 1;
                else
                {
                    long long int up = 0,left=0;
                    if(i>0)
                    {
                        up = dp[i-1][j];
                    }
                    if(j>0)
                    {
                        left = dp[i][j-1];
                    }
                    dp[i][j] = (up + left)%mod;
                }
            }
        }
        return dp[m-1][n-1];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends