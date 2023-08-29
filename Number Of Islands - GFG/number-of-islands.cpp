//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class DisJointSet{
    vector<int> size,parent;
    public:
    DisJointSet(int n)
    {
        parent.resize(n+1,0);
        size.resize(n+1,0);
        
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
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        // code here
        DisJointSet ds(n*m);
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        int cnt =0;
        
        vector<int> ans;
        
        vector<int> delrow = {-1,0,1,0};
        vector<int> delcol = {0,1,0,-1};
        for(int i=0;i<operators.size();i++)
        {
            int row = operators[i][0];
            int col = operators[i][1];
            
            if(visited[row][col] == true)
            {
                ans.push_back(cnt);
                continue;
            }
            
            visited[row][col] = true;
            cnt++;
            
            for(int j=0;j<4;j++)
            {
                int nrow = row + delrow[j];
                int ncol = col + delcol[j];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m)
                {
                    if(visited[nrow][ncol]== true)
                    {
                        int nodeNo = row *m + col;
                        int adjNodeNo = nrow *m + ncol;
                        
                        if(ds.findParent(nodeNo)!=ds.findParent(adjNodeNo))
                        {
                            cnt--;
                            ds.UnionBySize(nodeNo,adjNodeNo);
                        }
                    }
                }
            }
            
            ans.push_back(cnt);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends