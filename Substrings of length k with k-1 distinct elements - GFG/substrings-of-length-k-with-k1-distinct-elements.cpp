//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int countOfSubstrings(string S, int K) {
        // code here
        unordered_map<char,int> mp;
        int i=0,j=0,count=0,res=0;
        while(j<S.length())
        {
            mp[S[j]]++;
            if(j-i+1<K)
            j++;
            else if(j-i+1==K)
            {
                if(mp.size()==K-1)
                {
                    res++;
                }
                if(mp.find(S[i])!=mp.end())
                {
                    mp[S[i]]--;
                    if(mp[S[i]]==0)
                    mp.erase(S[i]);
                }
                i++;
                j++;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int K;
        cin>>S;
        cin>>K;

        Solution ob;
        cout << ob.countOfSubstrings(S,K) << endl;
    }
    return 0;
}
// } Driver Code Ends