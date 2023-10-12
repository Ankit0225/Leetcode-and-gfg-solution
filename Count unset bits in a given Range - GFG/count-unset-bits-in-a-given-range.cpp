//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    int countUnsetBits(int n, int l, int r) {
        // code here
        string ans = "";
        while(n>0)
        {
            if(n%2==1)
            ans += '1';
            else
            ans += '0';
            n/=2;
        }
        // cout<<ans<<endl;
        
        int cnt=0;
        for(int i=l-1;i<=r-1;i++)
            if(ans[i] == '0')
            cnt++;
            
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,l,r;
        
        cin>>n>>l>>r;

        Solution ob;
        cout << ob.countUnsetBits(n,l,r) << endl;
    }
    return 0;
}
// } Driver Code Ends