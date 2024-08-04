class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < n - 1; i++) {
            adj[i].push_back(i + 1);
        }

        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        queue<int> q;
        q.push(0);
        
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int neighbor : adj[node]) {
                if (dist[node] + 1 < dist[neighbor]) {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }

        vector<int> ans;
        for (auto query : queries) {
            int u = query[0];
            int v = query[1];
            adj[u].push_back(v);
            
            if (dist[u] + 1 < dist[v]) {
                dist[v] = dist[u] + 1;
                q.push(v);
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    for (int neighbor : adj[node]) {
                        if (dist[node] + 1 < dist[neighbor]) {
                            dist[neighbor] = dist[node] + 1;
                            q.push(neighbor);
                        }
                    }
                }
            }
            ans.push_back(dist[n - 1]);
        }
        return ans;
    }
};