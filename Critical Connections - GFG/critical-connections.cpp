//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    int timer = 1;
public:
    void dfs(int node,int parent,vector<bool> &visited,vector<int> adj[],vector<int> &tim,vector<int> &low,
    vector<vector<int>> &ans)
    {
        visited[node] = true;
        tim[node] = low[node] = timer;
        timer++;
        
        for(auto it : adj[node])
        {
            if(parent == it)
            continue;
            
            if(visited[it] == false)
            {
                dfs(it,node,visited,adj,tim,low,ans);
                low[node] = min(low[it],low[node]);
                if(low[it] > tim[node])
                {
                    if(node > it)
                    ans.push_back({it,node});
                    else
                    ans.push_back({node,it});
                }
            }
            else
            {
                low[node] = min(low[node],low[it]);
            }
        }
    }
	vector<vector<int>>criticalConnections(int V, vector<int> adj[]){
	    // Code here
	    vector<vector<int>> ans;
	    vector<bool> visited(V,false);
	    vector<int> tim(V),low(V);
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i] == false)
	        {
	            dfs(i,-1,visited,adj,tim,low,ans);
	        }
	    }
	    sort(ans.begin(),ans.end());
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
        vector<vector<int>>ans = obj.criticalConnections(V, adj);
        
        for(int i=0;i<ans.size();i++)
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
	return 0;
}
// } Driver Code Ends