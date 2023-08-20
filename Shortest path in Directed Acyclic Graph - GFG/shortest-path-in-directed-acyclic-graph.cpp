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
        for(int i=0;i<M;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v,wt});
        }
        
        vector<int> dist(N,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        minH.push({0,0});
        dist[0] = 0;
        
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
                }
            }
        }
        
        for(int i=0;i<N;i++)
        {
            if(dist[i]==INT_MAX)
            dist[i]=-1;
        }
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