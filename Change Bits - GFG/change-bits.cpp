//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        // code here
        string ans = "";
        int dup= N;
        while(N>0)
        {
            if(N%2==0)
                ans+='0';
            else
                ans+='1';
            N/=2;
        }
        int res = 0,sz = ans.length();
        res = pow(2,sz)-1;
        
        sz = res - dup;
        
        return {sz,res};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends