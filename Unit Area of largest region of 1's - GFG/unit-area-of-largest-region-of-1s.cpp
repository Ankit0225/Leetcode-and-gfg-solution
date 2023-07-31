//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int ans=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && visited[i][j]==false)
                {
                    visited[i][j] = true;
                    q.push({i,j});
                    int cnt=1;
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
                                && visited[nrow][ncol]==false && grid[nrow][ncol]==1)
                                {
                                    cnt++;
                                    q.push({nrow,ncol});
                                    visited[nrow][ncol]=true;
                                }
                            }
                        }
                    }
                    ans = max(ans,cnt);
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.findMaxArea(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends