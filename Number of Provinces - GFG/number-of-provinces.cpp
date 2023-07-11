//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void BFS(vector<vector<int>> &adjlist,int src,vector<bool> &visited)
    {
        visited[src]=true;
        queue<int> q;
        q.push(src);
        
        while(!q.empty())
        {
            int u =  q.front();
            q.pop();
            
            for(int x : adjlist[u])
            {
                if(visited[x]==false)
                {
                    visited[x]=true;
                    q.push(x);
                }
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        vector<vector<int>> adjlist(V,vector<int>());
        for(int  i=0;i<V;i++)
        for(int j=0;j<V;j++)
        {
            if(adj[i][j]!=0)
            adjlist[i].push_back(j);
        }
        vector<bool> visited(V,false);
        int cnt=0;
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false)
            {
                BFS(adjlist,i,visited);
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends