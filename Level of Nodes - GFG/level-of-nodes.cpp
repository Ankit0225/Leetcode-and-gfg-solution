//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<pair<int,int>> q;
	    
	    vector<bool> visited(V,false);
	    
	    q.push({0,0});
	    visited[0] = true;
	    while(!q.empty())
	    {
	        int node = q.front().first;
	        int level = q.front().second;
	        q.pop();
	        if(node == X)
	            return level;
	        for(auto it : adj[node])
	        {
	            if(visited[it] == false)
	            {
	                q.push({it,level+1});
	                visited[it] = true;
	            }
	        }
	    }
	    return -1;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends