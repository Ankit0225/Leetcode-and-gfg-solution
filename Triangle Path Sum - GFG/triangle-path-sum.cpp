//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(int row,int col,int n, vector<vector<int>>& triangle,vector<vector<int>>& dp)
    {
        if(row == n-1)
        return triangle[n-1][col];
        
        if(dp[row][col] != -1)
        return dp[row][col];
        
        int down = triangle[row][col] +  solve(row + 1,col,n,triangle,dp);
        int diagonal = triangle[row][col] + solve(row+1,col+1,n,triangle,dp);
        
        return dp[row][col] = min(down,diagonal);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(n,-1));
        return solve(0,0,n,triangle,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends