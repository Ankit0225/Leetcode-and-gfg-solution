//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int> v;
        stack<int> s;
        for(int i=0;i<arr.size();i++)
        {
             if(s.size()>0 && s.top()<0 && arr[i]>=0)
            {
                s.pop();
            }
            else if(s.size()>0 && s.top()>=0 && arr[i]<0)
            {
                s.pop();
            }
            else
            {
                s.push(arr[i]);
            }
        }
        // cout<<s.size()<<"\n";
        while(!s.empty())
        {
            int ans=s.top();
            v.push_back(ans);
            s.pop();
        }
        reverse(v.begin(),v.end());
        return v;
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

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends