class Solution {
public:
    bool checkisSubIsland(int i,int j,vector<vector<int>>& grid1,vector<vector<int>>& grid2,vector<vector<bool>>& visited)
    {
        int n = grid1.size(),m = grid1[0].size();
        
        bool result = true;

        queue<pair<int,int>> q;
        q.push({i,j});
        visited[i][j] = true;

        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            if(grid1[row][col] != 1)
                result = false;

            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                visited[nrow][ncol] == false && grid2[nrow][ncol] == 1)
                {
                    visited[nrow][ncol] = true;
                    q.push({nrow,ncol});
                }
            }
        }
        return result;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size(),m = grid1[0].size(),cnt=0;

        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid2[i][j] == 1 && visited[i][j] == false && checkisSubIsland(i,j,grid1,grid2,visited))
                    cnt++;
            }
        }
        return cnt;
    }
};