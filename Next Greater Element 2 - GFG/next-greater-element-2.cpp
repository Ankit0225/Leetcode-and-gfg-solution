//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int N, vector<int>& arr) {
        // code here
         stack<int> st;
         vector<int> res(N);
         for(int i=2*N-1;i>=0;i--)
         {
            if(st.size()==0)
            res[i%N] = -1;
            else if(st.size()>0 && st.top()>arr[i%N])
            res[i%N] = st.top();
            else if(st.size()>0 && st.top()<=arr[i%N])
            {
                while(st.size()>0 && st.top()<=arr[i%N])
                st.pop();
                if(st.size()==0)
                res[i%N] = -1;
                else
                res[i%N] = st.top();
            }
            st.push(arr[i%N]);
         }
         return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends