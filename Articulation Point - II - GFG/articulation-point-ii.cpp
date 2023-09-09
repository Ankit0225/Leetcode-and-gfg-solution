//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int timer = 1;
    void dfs(int node,int parent,vector<int> adj[],vector<bool> &visited,vector<bool> &mark,vector<int> &tin,
    vector<int> &low)
    {
        visited[node] = true;
        low[node] = tin[node] = timer;
        timer++;
        int child = 0;
        for(auto it : adj[node])
        {
            if(parent == it)
            continue;
            
            if(visited[it] == false)
            {
                dfs(it,node,adj,visited,mark,tin,low);
                low[node] = min(low[node],low[it]);
                
                if(low[it] >= tin[node] && parent != -1)
                {
                    mark[node] = true;
                }
                child++;
            }
            else
            {
                low[node] = min(tin[it],low[node]);
            }
        }
        
        if(child > 1 &&  parent == -1)
        mark[node] = true;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<bool> visited(V,false),mark(V,false);
        vector<int> tin(V),low(V);
        
        for(int i=0;i<V;i++)
        {
            if(visited[i] == false)
            {
                dfs(i,-1,adj,visited,mark,tin,low);
            }
        }
        
        vector<int> ans;
        for(int i=0;i<V;i++)
        if(mark[i] == true)
        ans.push_back(i);
        
        if(ans.size() == 0)
        return {-1};
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends