//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        vector<pair<int,int>> adj[n];
        for(int i=0;i<roads.size();i++)
        {
            int u = roads[i][0];
            int v = roads[i][1];
            int wt = roads[i][2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        priority_queue<pair<long long,int>,vector<pair<long long,int>> ,greater<pair<long long,int>>> minH;
        
        vector<long long> dist(n,LONG_MAX);
        vector<int> ways(n,0);
        
        dist[0] = 0;
        ways[0] = 1;
        
        minH.push({0,0});
        
        int mod = 1e9 + 7;
        
        while(!minH.empty())
        {
            long long distance = minH.top().first;
            int node = minH.top().second;
            minH.pop();
            
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                long long edgWt = it.second;
                
                if(distance + edgWt < dist[adjNode])
                {
                    dist[adjNode] = distance + edgWt;
                    minH.push({dist[adjNode],adjNode});
                    ways[adjNode] = ways[node] % mod;
                }
                else if(distance + edgWt == dist[adjNode])
                {
                    ways[adjNode]  = (ways[adjNode] + ways[node])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends