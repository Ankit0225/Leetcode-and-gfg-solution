//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	void Step_1_DFS(int node,vector<bool> &visited,vector<vector<int>> &adj,stack<int> &st)
	{
	    visited[node] = true;
	    for(auto it : adj[node])
	    {
	        if(visited[it] == false)
	        {
	            Step_1_DFS(it,visited,adj,st);
	        }
	    }
	    st.push(node);
	}
	
	void Step_3_DFS(int node,vector<bool> &visited,vector<int> adjRev[])
	{
	    visited[node] = true;
	    
	    for(auto it : adjRev[node])
	    {
	        if(visited[it] == false)
	        {
	            Step_3_DFS(it,visited,adjRev);
	        }
	    }
	}
    int kosaraju(int V, vector<vector<int>>& adj)
    {
        //code here
        stack<int> st;
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(visited[i] == false)
            {
                Step_1_DFS(i,visited,adj,st);
            }
        }
        
        vector<int> adjRev[V];
        visited = vector<bool>(V,false);
        for(int i=0;i<V;i++)
        {
            for(auto it : adj[i])
            {
                int u = i;
                int v = it;
                adjRev[v].push_back(u);
            }
        }
        
        int scc=0;
        while(!st.empty())
        {
            int node = st.top();
            st.pop();
            
            if(visited[node]==false)
            {
                Step_3_DFS(node,visited,adjRev);
                scc++;
            }
        }
        return scc;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends