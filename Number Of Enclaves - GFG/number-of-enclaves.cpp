//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size(),m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1 && vis[i][0]==false)
            {
                vis[i][0]=true;
                q.push({i,0});
            }
            if(grid[i][m-1]==1 && vis[i][m-1]==false)
            {
                vis[i][m-1]=true;
                q.push({i,m-1});
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1 && vis[0][j]==false)
            {
                vis[0][j]=true;
                q.push({0,j});
            }
            
            if(grid[n-1][j]==1 && vis[n-1][j]==false)
            {
                vis[n-1][j]=true;
                q.push({n-1,j});
            }
        }
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 && nrow<n && ncol >=0 && ncol < m 
                && vis[nrow][ncol]==false && grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=true;
                    q.push({nrow,ncol});
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==false)
                {
                    count++;
                }
            }
        }
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends