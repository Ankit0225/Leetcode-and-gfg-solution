//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        // code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        priority_queue<int,vector<int>,greater<int>> minH;
        for(int i=N-1;i>N-K-1;i--)
        {
            for(int j=N-1;j>N-K-1;j--)
            {
                int sum = A[i] + B[j];
                if(minH.size()<K)
                minH.push(sum);
                else
                {
                    int curr = minH.top();
                    if(sum>curr)
                    {
                        minH.pop();
                        minH.push(sum);
                    }
                    else
                    break;
                }
            }
        }
        
        vector<int> ans;
        while(!minH.empty())
        {
            ans.push_back(minH.top());
            minH.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends