//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class DisJointSet{
    vector<int> parent,size;
    public:
    DisJointSet(int n)
    {
        parent.resize(n+1,0);
        size.resize(n+1,0);
        for(int i=0;i<=n;i++)
        parent[i]=i;
    }
    
    int findParent(int node)
    {
        if(parent[node] == node)
        return node;
        return parent[node] = findParent(parent[node]);
    }
    
    void UnionBySize(int u,int v)
    {
        int UU = findParent(u);
        int UV = findParent(v);
            
        if(UU == UV) 
        return;
        if(size[UU] < size[UV])
        {
            parent[UU] = UV;
            size[UV] += size[UU];
        }
        else
        {
            parent[UV] = UU;
            size[UU] += size[UV];
        }
    }
};

class Solution {
  public:
    int Solve(int n, vector<vector<int>>& edge) {
        // code here
        DisJointSet ds(n);
        int extraEdge=0;
        for(int i=0;i<edge.size();i++)
        {
            int u = edge[i][0];
            int v = edge[i][1];
            if(ds.findParent(u) == ds.findParent(v))
            extraEdge++;
            else
            ds.UnionBySize(u,v);
        }
        int cntCC=0;
        for(int i=0;i<n;i++)
        if(ds.findParent(i) == i)
        cntCC++;
        
        return extraEdge>=cntCC-1 ?  cntCC - 1 : -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 2; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution Obj;
        cout << Obj.Solve(n, adj) << "\n";
    }
    return 0;
}
// } Driver Code Ends