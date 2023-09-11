//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        // Code here
        vector<vector<int>> ans(n,vector<int>(m,-1));
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i][j] == 'W' && visited[i][j] == false)
                {
                    ans[i][j] = 0;
                    q.push({{i,j},0});
                    visited[i][j] = true;
                }
                if(c[i][j] == 'N' && visited[i][j] == false)
                {
                    visited[i][j] = true;
                    ans[i][j] = 0;
                }
            }
        }
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            int row = p.first.first;
            int col = p.first.second;
            int steps = p.second;
            
            for(int i=0;i<4;i++)
            {
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                visited[nrow][ncol] == false)
                {
                    if(c[nrow][ncol] =='.')
                    {
                        ans[nrow][ncol] = 0;
                        q.push({{nrow,ncol},steps+2});
                        visited[nrow][ncol] = true;
                    }
                    else if(c[nrow][ncol] == 'H')
                    {
                        q.push({{nrow,ncol},steps+2});
                        ans[nrow][ncol] = steps+2;
                        visited[nrow][ncol] = true;
                    }
                }
            }   
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i][j] == 'H' && visited[i][j] == false)
                ans[i][j] = -1;
                if(c[i][j] == '.' && visited[i][j] == false)
                ans[i][j] = 0;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> c(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> res=ob.chefAndWells(n,m,c);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
// } Driver Code Ends