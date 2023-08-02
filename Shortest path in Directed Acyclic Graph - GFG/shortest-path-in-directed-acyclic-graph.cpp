//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>> adj[N];
        vector<int> indegree(N,0);
        for(int i=0;i<M;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v,wt});
            indegree[v]++;
        }
        queue<int> q;
        for(int i=0;i<N;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        vector<bool> visited(N,false);
        vector<int> dist(N,1e9);
        
        dist[0] = 0;
        visited[0] = true;
        
        while(!q.empty())
        {
            int node  = q.front();
            q.pop();
            
            for(auto it : adj[node])
            {
                int v = it.first;
                int wt = it.second;
                visited[v] = true;
                if(dist[node] + wt < dist[v])
                {
                    dist[v] = dist[node] + wt;
                }
                indegree[v]--;
                if(indegree[v]==0)
                q.push(v);
            }
        }
        
        for(int i=0;i<N;i++)
        if(dist[i] == 1e9)
        dist[i] = -1;
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
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