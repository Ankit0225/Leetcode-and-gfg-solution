//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(int day,int task,vector<vector<int>> &points,vector<vector<int>> &dp)
    {
         int mx = 0;
        if(day == 0)
        {
           
            for(int i=0;i<3;i++)
            {
                if(i!=task)
                    mx = max(mx,points[day][i]);
            }
            return mx;
        }
        
        if(dp[day][task] != -1)
        return dp[day][task];
            

        for(int i=0;i<3;i++)
        {
            if(i!=task)
            {
                int point = points[day][i] + solve(day - 1,i,points,dp);
                mx = max(mx,point);
            }
        }
        
        return dp[day][task] = mx;
    }
    
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(4,-1));
        
        return solve(n-1,3,points,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends