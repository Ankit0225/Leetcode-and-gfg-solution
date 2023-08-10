//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here
	     vector<int> delrow = { -2, -1, 1, 2, -2, -1, 1, 2 };
         vector<int> delcol = { -1, -2, -2, -1, 1, 2, 2, 1 };
         vector<vector<bool>> visited(N+1,vector<bool>(N+1,false));
         queue<pair<pair<int,int>,int>> q;
         q.push({{KnightPos[0],KnightPos[1]},0});
         
         while(!q.empty())
         {
             auto p = q.front();
             q.pop();
             int row = p.first.first;
             int col = p.first.second;
             int steps = p.second;
             
             if(TargetPos[0] == row && TargetPos[1] == col)
             return steps;
             
             for(int i=0;i<8;i++)
             {
                 int nrow = row + delrow[i];
                 int ncol = col + delcol[i];
                 
                 if(nrow>=1 && nrow<=N && ncol >=1 && ncol <= N &&
                 visited[nrow][ncol] == false)
                 {
                     q.push({{nrow,ncol},steps+1});
                     visited[nrow][ncol] = true;
                 }
             }
         }
         return -1;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends