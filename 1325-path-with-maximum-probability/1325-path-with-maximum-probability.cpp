class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<vector<pair<int,double>>> adj(n);
        for(int i=0;i<edges.size();i++)
        {
            int u = edges[i][0],v = edges[i][1];
            adj[u].push_back({v,succProb[i]});
            adj[v].push_back({u,succProb[i]});
        }
        priority_queue<pair<double,int>> maxH;
        vector<double> dist(n,0.0);

        maxH.push({1.0,start_node});
        dist[start_node] = 1.0;

        while(!maxH.empty())
        {
            double prob = maxH.top().first;
            int node = maxH.top().second;
            maxH.pop();

            for(auto it : adj[node])
            {
                int adjNode = it.first;
                double nextProb = it.second;

                if(prob * nextProb > dist[adjNode])
                {
                    dist[adjNode] = prob * nextProb;
                    maxH.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist[end_node];
    }
};