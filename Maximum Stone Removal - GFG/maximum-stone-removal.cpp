//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class DisJointSet{
  vector<int> size,parent;
  public:
  DisJointSet(int n)
  {
      parent.resize(n+1,0);
      size.resize(n+1,1);
      
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
      
      if(size[UPV] > size[UPU])
      {
          size[UPV] += size[UPU];
          parent[UPU] = UPV;
      }
      else
      {
          size[UPU] += size[UPV];
          parent[UPV] = UPU;
      }
  }
};
class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
        // Code here
        int row = 0;
        int col = 0;
        
        for(auto it : stones)
        {
            row = max(row,it[0]);
            col = max(col,it[1]);
        }
        
        DisJointSet ds(row + col + 1);
        unordered_map<int,int> stone;
        
        for(auto it : stones)
        {
            int nodeRow = it[0];
            int nodeCol = it[1] + row + 1;
            
            ds.UnionBySize(nodeRow,nodeCol);
            stone[nodeRow] = 1;
            stone[nodeCol] = 1;
        }
        
        int cntCC = 0;
        for(auto it : stone)
        {
            if(ds.findParent(it.first) == it.first)
            cntCC++;
        }
        
        return n - cntCC;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends