//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void dfs(int row,int col,vector<vector<char>> &mat,vector<vector<bool>> &vis)
    {
        vis[row][col] = true;
        int n=mat.size(),m=mat[0].size();
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        for(int i=0;i<4;i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol < m 
            && vis[nrow][ncol]==false && mat[nrow][ncol]=='O')
            {
                dfs(nrow,ncol,mat,vis);
            }
        }
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            if(vis[i][0]==false && mat[i][0]=='O')
            {
                dfs(i,0,mat,vis);
            }
            if(vis[i][m-1]==false && mat[i][m-1]=='O')
            {
                dfs(i,m-1,mat,vis);
            }
        }
        for(int j=0;j<m;j++)
        {
            if(vis[0][j]==false && mat[0][j]=='O')
            {
                dfs(0,j,mat,vis);
            }
            if(vis[n-1][j]==false && mat[n-1][j]=='O')
            {
                dfs(n-1,j,mat,vis);
            }
        }
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(vis[i][j]==false && mat[i][j]=='O')
                {
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends