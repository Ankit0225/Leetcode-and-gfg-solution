//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int timer = 1;
    void dfs(int node,int parent,vector<bool> &visited,vector<int> adj[],vector<int> &tin,
    vector<int> &low,vector<bool> &mark)
    {
        visited[node] = true;
        tin[node] = low[node] = timer;
        timer++;
        int child = 0;
        
        for(auto it : adj[node])
        {
            if(it == parent)
            continue;
            
            if(visited[it] == false)
            {
                dfs(it,node,visited,adj,tin,low,mark);
                low[node] = min(low[node],low[it]);
                if(low[it]>=tin[node] && parent != -1)
                mark[node] = true;
                child++;
            }
            else
            {
                low[node] = min(low[node],tin[it]);
            }
        }
        
        if(child > 1 && parent == -1)
        mark[node] = true;
    }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> ans;
        vector<bool> visited(V,false),mark(V,false);
        vector<int> tin(V),low(V);
        
        for(int i=0;i<V;i++)
        {
            if(visited[i] == false)
            {
                dfs(i,-1,visited,adj,tin,low,mark);
            }
        }
        
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