//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        vector<pair<int,int>> adj[n];
        for(int i=0;i<m;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        int cntcity=INT_MAX,cityNo=-1;
        for(int i=0;i<n;i++)
        {
            vector<int> dist(n,INT_MAX);
            minH.push({0,i});
            
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
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(i==j)
                dist[j] = 0;
                if(dist[j]<=distanceThreshold)
                count++;
            }
            
            if(count<=cntcity)
            {
                cntcity = count;
                cityNo = i;
            }
        }
        return cityNo;
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
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends