//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here
    unordered_map<char,int> mp;
    int i=0,j=0,res=INT_MIN;
    while(j<S.length())
    {
        mp[S[j]]++;
        if(mp.size()==j-i+1)
        {
            res=max(res,j-i+1);
            j++;
        }
        else if(mp.size()<j-i+1)
        {
            while(mp.size()<j-i+1)
            {
                mp[S[i]]--;
                if(mp[S[i]]==0)
                {
                    mp.erase(S[i]);
                }
                i++;
            }
            j++;
        }
    }
    return res;
}