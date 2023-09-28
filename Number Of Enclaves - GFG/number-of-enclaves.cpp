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
        int n = grid.size(),m = grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++)
        {
            if(visited[i][0] == false && grid[i][0] == 1)
            {
                visited[i][0] = true;
                q.push({i,0});
            }
            if(visited[i][m-1] == false && grid[i][m-1] == 1)
            {
                visited[i][m-1] =true;
                q.push({i,m-1});
            }
        }
        
        for(int j=0;j<m;j++)
        {
            if(visited[0][j] == false && grid[0][j] == 1)
            {
                visited[0][j] = true;
                q.push({0,j});
            }
            if(visited[n-1][j] == false && grid[n-1][j] == 1)
            {
                visited[n-1][j] = true;
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
                
                if(nrow >= 0 && nrow < n && ncol >=0 && ncol <m && 
                visited[nrow][ncol] == false && grid[nrow][ncol] == 1)
                {
                    visited[nrow][ncol] = true;
                    q.push({nrow,ncol});
                }
            }
        }
        
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j] == false && grid[i][j] == 1)
                {
                    cnt++;
                }
            }
        }
        return cnt;
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