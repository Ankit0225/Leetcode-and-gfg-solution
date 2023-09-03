//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        
        queue<pair<int,int>> q;
        // traverse row
        
        for(int j=0;j<m;j++)
        {
            if(mat[0][j] == 'O' && visited[0][j] == false)
            {
                q.push({0,j});
                visited[0][j] = true;
            }
            
            if(mat[n-1][j] == 'O' && visited[n-1][j] == false)
            {
                q.push({n-1,j});
                visited[n-1][j] = true;
            }
        }
        
        // traverse column;
        
        for(int i=0;i<n;i++)
        {
            if(mat[i][0] == 'O' && visited[i][0] == false)
            {
                q.push({i,0});
                visited[i][0] = true;
            }
            
            if(mat[i][m-1] == 'O' && visited[i][m-1] == false)
            {
                q.push({i,m-1});
                visited[i][m-1] = true;
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
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                visited[nrow][ncol] == false && mat[nrow][ncol] == 'O')
                {
                    visited[nrow][ncol]= true;
                    q.push({nrow,ncol});
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(visited[i][j] == false && mat[i][j] == 'O')
                mat[i][j] = 'X';
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