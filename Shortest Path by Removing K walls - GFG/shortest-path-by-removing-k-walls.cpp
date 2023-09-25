//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        // code here
        vector<vector<int>> dist(n,vector<int>(m,1e9));
        
        dist[0][0] = 0;
        // {k,dist,row,col}
        priority_queue<pair<int,pair<int,pair<int,int>>>,vector<pair<int,pair<int,pair<int,int>>>>,
        greater<pair<int,pair<int,pair<int,int>>>>> minH;
        
        minH.push({0,{0,{0,0}}});
        int ans = INT_MAX;
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        while(!minH.empty())
        {
            auto it = minH.top();
            minH.pop();
            
            int obstacle = it.first;
            int dis = it.second.first;
            int row = it.second.second.first;
            int col = it.second.second.second;
            int counter = obstacle;
            
            if(obstacle > k)
            break;
            if(row == n-1 && col == m-1)
            ans = min(ans,dis);
            
            for(int i=0;i<4;i++)
            {
                
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                
                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m)
                {
                    if(mat[nrow][ncol] == 1 && dis + 1 < dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = dis + 1; 
                        minH.push({counter + 1,{dis +1 ,{nrow,ncol}}});
                    }
                    if(mat[nrow][ncol] == 0 && dis + 1< dist[nrow][ncol])
                    {
                        dist[nrow][ncol] = dis + 1;
                        minH.push({counter,{dis +1,{nrow,ncol}}});
                    }
                }
            }   
        }
        return ans == INT_MAX ?  -1 : ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends