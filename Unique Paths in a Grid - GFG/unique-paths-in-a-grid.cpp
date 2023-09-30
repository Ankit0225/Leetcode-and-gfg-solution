//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        int mod = 1e9 + 7;
        vector<int> dp(m,0);
        for(int i=0;i<n;i++)
        {
            vector<int> temp(m,0);
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 0)
                temp[j] = 0;
                else if(i == 0 && j == 0)
                temp[j] = 1;
                else
                {
                    int up = 0,left=0;
                    if(i>0)
                    up = dp[j];
                    if(j>0)
                    left = temp[j-1];
                    temp[j] = (up + left)%mod;
                }
            }
            dp = temp;
        }
        return dp[m-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends