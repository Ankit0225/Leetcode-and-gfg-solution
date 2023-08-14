//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to return the minimum cost to react at bottom
	//right cell from top left cell.
    int minimumCostPath(vector<vector<int>>& grid) 
    {
        // Code here
        int n = grid.size(),m=grid[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> minH;
        
        vector<vector<int>> dist(n,vector<int>(m,INT_MAX));
        
        // visited[0][0] = true;
        minH.push({grid[0][0],{0,0}});
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        int cost=0;
        
        while(!minH.empty())
        {
            auto it = minH.top();
            minH.pop();
            
            int distance = it.first;
            int row = it.second.first;
            int col = it.second.second;
            
            if(row == n-1 && col == m-1)
            return dist[row][col];
            
            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m)
                {
                    if(distance + grid[nrow][ncol]< dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = distance + grid[nrow][ncol];
                        minH.push({dist[nrow][ncol],{nrow,ncol}});
                    }
                }
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.minimumCostPath(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends