class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        
        for(int i = 0;i<times.size();i++)
        {
            int u = times[i][0];
            int v = times[i][1];
            int wt = times[i][2];
            adj[u].push_back({v,wt});
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;

        vector<int> dist(n+1,1e9);
        dist[k] = 0;
        minH.push({0,k});
        while(!minH.empty())
        {
            int wt = minH.top().first;
            int node = minH.top().second;
            minH.pop();

            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int nextwt = it.second;

                if(wt + nextwt < dist[adjNode])
                {
                    dist[adjNode] = wt + nextwt;
                    minH.push({dist[adjNode],adjNode});
                }
            }
        }
        int ans = INT_MIN;
        for(int i=1;i<=n;i++)
        {
            if(dist[i] == 1e9)
                return -1;
            else
                ans = max(dist[i],ans);
        }
        return ans;
    }
};