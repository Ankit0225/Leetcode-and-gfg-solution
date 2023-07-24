//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void DFS(int row,int col,vector<vector<int>> &grid,vector<vector<bool>> &vis,vector<pair<int,int>> &v,int row0,int col0)
    {
        vis[row][col]=true;
        v.push_back({row-row0,col-col0});
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        for(int i=0;i<4;i++)
        {
            
            int nrow = row + delrow[i];
            int ncol = col +  delcol[i];
            if(nrow >=0 && nrow <n && ncol >=0 && ncol<m && 
            grid[nrow][ncol]==1 && vis[nrow][ncol]==false)
            {
                DFS(nrow,ncol,grid,vis,v,row0,col0);
            }
        }
    }
    
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        set<vector<pair<int,int>>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && vis[i][j]==false)
                {
                    vector<pair<int,int>> v;
                    DFS(i,j,grid,vis,v,i,j);
                    s.insert(v);
                }
            }
        }
        return s.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends