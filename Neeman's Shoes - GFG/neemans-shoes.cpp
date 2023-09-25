//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    string exercise(int N, int M, vector<vector<int>> A, int src, int dest, int X){
        // code here
        vector<pair<int,int>> adj[M+1];
        
        for(int i=0;i<M;i++)
        {
            int u = A[i][0];
            int v = A[i][1];
            int wt = A[i][2];
            
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
        
        vector<int> dist(N,INT_MAX);
        dist[src] = 0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        
        // {dist,node};
        
        minH.push({0,src});
        int total = 0;
        while(!minH.empty())
        {
            int dis = minH.top().first;
            int node = minH.top().second;
            minH.pop();
            
            total = dis;
            
            if(node == dest)
            break;
            
            for(auto it : adj[node])
            {
                int adjNode = it.first;
                int nextDis = it.second;
                if(nextDis + dis < dist[adjNode])
                {
                    dist[adjNode] = nextDis + dis;
                    minH.push({dist[adjNode],adjNode});
                }
            }
        }
        // cout<<total;
        return total > X ? "Neeman's Wool Joggers" : "Neeman's Cotton Classics";
        
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, M, src, dest, X;
        cin >> N >> M >> src >> dest >> X;
        vector<vector<int>> A(M, vector<int> (3, 0));
        for(int i = 0; i < M; i++){
            cin >> A[i][0] >> A[i][1] >> A[i][2];
        }
        Solution obj;
        cout << obj.exercise(N, M, A, src, dest, X) << "\n";
    }
}

// } Driver Code Ends