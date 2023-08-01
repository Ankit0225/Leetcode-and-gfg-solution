//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        if(A[0][0] == 0 || A[X][Y] == 0)
        return -1;
        int counter=0;
        vector<vector<bool>> visited(N,vector<bool>(M,false));
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        queue<pair<pair<int,int>,int>> q;
        
        q.push({{0,0},0});
        while(!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int count = q.front().second;
            
            q.pop();
            
            if(X==row && Y == col)
            {
                return count;
            }
            
            for(int k=0;k<4;k++)
            {
                int nrow = row + delrow[k];
                int ncol = col + delcol[k];
                
                if(nrow>=0 && nrow<N && ncol>=0 && ncol<M &&
                visited[nrow][ncol] == false && A[nrow][ncol]==1)
                {
                    visited[nrow][ncol] = true;
                    q.push({{nrow,ncol},count+1});
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
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends