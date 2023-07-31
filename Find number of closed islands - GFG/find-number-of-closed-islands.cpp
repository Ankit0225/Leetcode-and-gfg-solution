//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
        int ans =0;
        vector<vector<bool>> visited(N,vector<bool>(M,false));
        queue<pair<int,int>> q;
        for(int i=0;i<N;i++)
        {
            if(matrix[i][0]==1 && visited[i][0] == false)
            {
                q.push({i,0});
                visited[i][0] = true;
            }
            if(matrix[i][M-1]==1 && visited[i][M-1]==false)
            {
                q.push({i,M-1});
                visited[i][M-1]=true;
            }
        }
        
        for(int j=0;j<M;j++)
        {
            if(matrix[0][j]==1 && visited[0][j] == false)
            {
                visited[0][j] = true;
                q.push({0,j});
            }
            if(matrix[N-1][j] == 1 && visited[N-1][j]==false)
            {
                visited[N-1][j] = true;
                q.push({N-1,j});
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
                
                if(nrow >= 0 && nrow<N && ncol>=0 && ncol<M &&
                visited[nrow][ncol]==false && matrix[nrow][ncol]==1)
                {
                    q.push({nrow,ncol});
                    visited[nrow][ncol]=true;
                }
            }
        }
        int counter=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(visited[i][j]==false && matrix[i][j]==1)
                {
                    visited[i][j]=true;
                    q.push({i,j});
                    
                    while(!q.empty())
                    {
                        int row = q.front().first;
                        int col = q.front().second;
                        q.pop();
                        
                        for(int i=0;i<4;i++)
                        {
                            int nrow = row + delrow[i];
                            int ncol = col + delcol[i];
                            
                            if(nrow>=0 && nrow<N && ncol>=0 && ncol<M &&
                            visited[nrow][ncol]==false && matrix[nrow][ncol]==1)
                            {
                                visited[nrow][ncol]=true;
                                q.push({nrow,ncol});
                            }
                        }
                    }
                    counter++;
                }
            }
        }
    return counter;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends