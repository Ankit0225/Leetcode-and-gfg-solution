//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int minimumCost(vector<vector<int>>& flights, int n, int k) {
        // code here
        
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<flights.size();i++)
        {
            int u = flights[i][0];
            int v = flights[i][1];
            int wt = flights[i][2];
            
            adj[u].push_back({v,wt});
        }
        int ans =0;
        vector<int> dist(n+1,INT_MAX);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        minH.push({0,k});
        dist[k] = 0;
        
        while(!minH.empty())
        {
            int cost = minH.top().first;
            int node = minH.top().second;
            minH.pop();
            
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int adjCost = it.second;
                
                if(cost + adjCost < dist[adjNode])
                {
                    dist[adjNode] = cost + adjCost;
                    minH.push({dist[adjNode],adjNode});
                }
            }
        }
        for(int i=1;i<dist.size();i++)
        {
            if(dist[i]==INT_MAX)
            return -1;
            ans = max(ans,dist[i]);
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends