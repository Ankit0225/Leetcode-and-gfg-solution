//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n,vector<int>(4,0));
        
        dp[0][0] = max(points[0][1],points[0][2]);
        dp[0][1] = max(points[0][2],points[0][0]);
        dp[0][2] = max(points[0][0],points[0][1]);
        
        dp[0][3] = max(points[0][0],max(points[0][1],points[0][2]));
        
        
        for(int day=1;day<n;day++)
        {
            for(int last = 0;last<4;last++)
            {
                dp[day][last] = 0;
                
                for(int task=0;task<3;task++)
                {
                    if(task!=last)
                    {
                        int point = points[day][task] + dp[day-1][task];
                        
                        dp[day][last] = max(dp[day][last],point);
                    }
                }
            }
        }
        
        return dp[n-1][3];
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