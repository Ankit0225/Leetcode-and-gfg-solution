//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
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
            return node;
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
class Solution{
public:
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int n = grid.size(),mx = 0;
        DisJointSet ds(n*n);
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        
        for(int row = 0;row<n;row++)
        {
            for(int col = 0;col<n;col++)
            {
                if(grid[row][col] == 0)
                    continue;
                
                for(int idx = 0;idx<4;idx++)
                {
                    int nrow = row + delrow[idx];
                    int ncol = col + delcol[idx];
                    
                    if(nrow >= 0 && nrow < n && ncol>=0 && ncol < n
                    && grid[nrow][ncol] == 1)
                    {
                        int nodeNo = row * n + col;
                        int adjNodeNo = nrow * n + ncol;
                        
                        ds.UnionBySize(nodeNo,adjNodeNo);
                    }
                }
            }
        }
        
        
        for(int row = 0;row < n;row++)
        {
            for(int col = 0;col < n;col++)
            {
                if(grid[row][col] == 1)
                    continue;
                
                set<int> components;
                
                for(int idx = 0;idx<4;idx++)
                {
                    int nrow = row + delrow[idx];
                    int ncol = col + delcol[idx];
                    
                    if(nrow >=0 && nrow < n && ncol >= 0 && ncol < n)
                    {
                        if(grid[nrow][ncol] == 1)
                        {
                            components.insert(ds.findParent(nrow * n + ncol));
                        }
                    }
                }
                int sizeTotal = 0;
                for(auto it : components)
                    sizeTotal += ds.size[it];
                mx = max(mx,sizeTotal + 1);
            }
        }
        
        for(int cellNo = 0;cellNo< n*n ;cellNo++)
            mx = max(mx,ds.size[ds.findParent(cellNo)]);
            
        return mx;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){

        int n;
        cin>>n;
        vector<vector<int>>grid(n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>grid[i][j];
        Solution ob;
        cout<<ob.largestIsland(grid)<<endl;
    }
    return 0;
}

// } Driver Code Ends