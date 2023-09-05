//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int mod = 1e9 + 7;
        int curr,prev2=0,prev = 1;
        for(int i=2;i<=n;i++)
        {
            curr = ((prev2 % mod) + (prev % mod)) % mod;
            prev2 = (prev)%mod;
            prev  = curr % mod;
        }
        return prev % mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends