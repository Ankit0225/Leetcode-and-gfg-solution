//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:
    int minCostClimbingStairs(vector<int>&cost ,int N) {
        //Write your code here
        vector<int> dp(N,-1);
        dp[N-1] = cost[N-1];
        dp[N-2] = cost[N-2];
        
        for(int i=N-3;i>=0;i--)
        {
            dp[i] = cost[i] + min(dp[i+1],dp[i+2]);
        }
        
        return min(dp[0],dp[1]);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>cost(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>cost[i];
        }

        Solution ob;
        cout<<ob.minCostClimbingStairs(cost,N);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends