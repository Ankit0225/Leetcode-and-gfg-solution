//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class DisJointSet{
    public:
    vector<int> parent,size;
    DisJointSet(int n)
    {
        size.resize(n+1,1);
        parent.resize(n+1,0);
        
        for(int i=1;i<=n;i++)
        parent[i] = i;
    }
    
    int findParent(int node)
    {
        if(parent[node] == node)
        return parent[node];
        else
        return parent[node] = findParent(parent[node]);
    }
    
    void UnionBySize(int u,int v)
    {
        int UPU = findParent(u);
        int UPV = findParent(v);
        
        if(UPU == UPV)
        return;
        
        if(size[UPU] > size[UPV])
        {
            size[UPU] += size[UPV];
            parent[UPV] = UPU;
        }
        else
        {
            size[UPV] += size[UPU];
            parent[UPU] = UPV;
        }
    }
};

class Solution {
  public:
    int MaxConnection(vector<vector<int>>& grid) {
        // code here
        int n = grid.size();
        DisJointSet ds(n*n);
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        for(int i=0;i < n ;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 0)
                continue;
                
                for(int k=0;k<4;k++)
                {
                    int nrow  = i + delrow[k];
                    int ncol = j + delcol[k];
                    
                    if(nrow>=0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 1)
                    {
                        int NodeNo = i *n + j;
                        int adjNodeNo = nrow * n + ncol;
                        ds.UnionBySize(NodeNo,adjNodeNo);
                    }
                }
            }
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                set<int> components;
                if(grid[i][j] == 1)
                continue;
                
                for(int k=0;k<4;k++)
                {
                    int nrow = i + delrow[k];
                    int ncol = j + delcol[k];
                    
                    if(nrow>=0 && nrow<n && ncol >= 0 && ncol < n)
                    {
                        if(grid[nrow][ncol] == 1)
                        {
                            int val = ds.findParent(nrow * n + ncol);
                            components.insert(val);
                        }
                    }
                }
                
                int total = 0;
                for(auto it : components)
                total += ds.size[it];
                
                ans = max(ans,total + 1);
            }
        }
        
        for(int i= 0; i< n*n ;i++)
        {
            ans = max(ans,ds.size[ds.findParent(i)]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> grid(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }

        Solution obj;
        cout<<obj.MaxConnection(grid)<<"\n";
    }
}

// } Driver Code Ends