//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<m;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        vector<int> dist(n+1,1e9),parent(n+1);
        for(int i=1;i<=n;i++)
        parent[i] = i;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        dist[1] = 0;
        minH.push({0,1});
        
        while(!minH.empty())
        {
            int wt = minH.top().first;
            int node = minH.top().second;
            minH.pop();
            
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int edgWt = it.second;
                
                if(wt + edgWt < dist[adjNode])
                {
                    dist[adjNode] = wt + edgWt;
                    minH.push({dist[adjNode],adjNode});
                    
                    parent[adjNode] = node;
                }
            }
        }
        
        if(dist[n] == 1e9)
        return {-1};
        
        vector<int> res;
        int node = n;
        while(parent[node] != node)
        {
            res.push_back(node);
            node = parent[node];
        }
        res.push_back(1);
        reverse(res.begin(),res.end());
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends