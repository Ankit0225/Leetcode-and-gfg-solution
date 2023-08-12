//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        int mod = 1e5;
        vector<int> dist(1e5,INT_MAX);
        dist[start] = 0;
        
        queue<pair<int,int>> q;
        q.push({start,0});
        
        while(!q.empty())
        {
            int val = q.front().first;
            int steps = q.front().second;
            q.pop();
            
            for(int i=0;i<arr.size();i++)
            {
                int num = (val * arr[i]) % mod;
                if(steps + 1 < dist[num])
                {
                    dist[num] = steps + 1;
                    if(num == end)
                    return dist[num];
                    q.push({num,dist[num]});
                }
            }
        }
        return dist[end] == INT_MAX ? -1 : dist[end];
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends