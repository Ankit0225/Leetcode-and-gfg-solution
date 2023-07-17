//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    void bfs(int row,int col,vector<vector<bool>> &visited,vector<vector<char>> &grid)
    {
        visited[row][col]=true;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n=grid.size(),m=grid[0].size();
        
        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int delrow=-1;delrow<=1;delrow++)
            {
                for(int delcol=-1;delcol<=1;delcol++)
                {
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                    && grid[nrow][ncol]=='1' && visited[nrow][ncol] == false)
                    {
                        visited[nrow][ncol]=true;
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size(),m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int cnt=0;
        for(int row=0;row<n;row++)
        {
            for(int col=0;col<m;col++)
            {
                if(visited[row][col]==false && grid[row][col]=='1' )
                {
                    cnt++;
                    bfs(row,col,visited,grid);
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends