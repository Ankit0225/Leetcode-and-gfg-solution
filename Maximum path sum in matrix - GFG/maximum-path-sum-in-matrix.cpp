//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(int row,int col,vector<vector<int>> &Matrix,vector<vector<int>> &dp)
    {
        if(col < 0 || col >= Matrix.size())
            return -1e9;
        
        if(row == 0)
            return Matrix[row][col];
        
        if(dp[row][col] != -1)
            return dp[row][col];
            
        int up = Matrix[row][col] + solve(row - 1,col,Matrix,dp);
        int left_diagonal = Matrix[row][col] + solve(row - 1,col - 1,Matrix,dp);
        int right_diagonal = Matrix[row][col] + solve(row -1, col + 1,Matrix,dp);
        
        return dp[row][col] = max({up,left_diagonal,right_diagonal});
    }
    int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int mx = INT_MIN;
        vector<vector<int>> dp(N,vector<int>(N,-1));
        for(int i=0;i<N;i++)
            mx = max(mx,solve(N-1,i,Matrix,dp));
            
        return mx;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> Matrix(N, vector<int>(N, 0));
        for(int i = 0;i < N*N;i++)
            cin>>Matrix[(i/N)][i%N];
        
        Solution ob;
        cout<<ob.maximumPath(N, Matrix)<<"\n";
    }
    return 0;
}
// } Driver Code Ends