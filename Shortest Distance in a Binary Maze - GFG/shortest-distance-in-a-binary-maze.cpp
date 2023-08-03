//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        int n = grid.size();
        int m = grid[0].size();
        int u = source.first;
        int v = source.second;
        int x = destination.first;
        int y = destination.second;
        if(grid[u][v] == 0 || grid[u][v] == 0)
        return -1;
        
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>> q;
        visited[u][v] = true;
        q.push({{u,v},0});
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            int row = p.first.first;
            int col = p.first.second;
            int counter = p.second;
            
            if(row == x && col == y)
            return counter;
            
            for(int i=0;i<4;i++)
            {
                int nrow =  row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                && visited[nrow][ncol] == false && grid[nrow][ncol] == 1)
                {
                    visited[nrow][ncol] = true;
                    q.push({{nrow,ncol},counter+1});
                }
            }
        }
        
        return -1;
       
        
        
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

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends