// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lastIndex(string s) 
    {
        int ans=-1;
     for(int i=0;i<s.length();i++)
     if(s[i]=='1')
     ans=max(ans,i);
     return ans;
    }

};

// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  // } Driver Code Ends