//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool directedDFS(int node,vector<int> adj[],vector<bool> &vis,vector<bool> &pathvis,vector<bool> &check)
    {
        vis[node]=pathvis[node]=1;
        check[node]=false;
        for(auto adjNode : adj[node])
        {
            if(vis[adjNode]==false)
            {
                if(directedDFS(adjNode,adj,vis,pathvis,check)==true)
                {
                    check[node]=false;
                    return true;
                }
            }
            else if(pathvis[adjNode]==true)
            {
                check[node] =false;
                return true;
            }
        }
        check[node]=true;
        pathvis[node]=false;
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        
        vector<bool> vis(V,false);
        vector<bool> pathvis(V,false);
        vector<bool> check(V,false);
        
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                directedDFS(i,adj,vis,pathvis,check);
            }
        }
        vector<int > safeNode;
        for(int i=0;i<V;i++)
        {
            if(check[i]==1)
            {
                safeNode.push_back(i);
            }
        }
        return safeNode;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends