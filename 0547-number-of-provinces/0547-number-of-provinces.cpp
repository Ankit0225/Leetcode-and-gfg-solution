class Solution {
public:
    void BFS(int node,vector<vector<int>> &adj,vector<int> &visited)
    {
        visited[node] = true;
        queue<int> q;
        q.push(node);

        while(!q.empty())
        {
            int val = q.front();
            q.pop();

            for(auto it : adj[val])
            {
                if(visited[it] == false)
                {
                    visited[it]= true;
                    q.push(it);
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int cnt = 0;
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(n,false);
        for(int i=0;i<n;i++)
        {
            if(visited[i] == false)
            {
                BFS(i,adj,visited);
                cnt++;
            }
        }
        return cnt;
    }
};