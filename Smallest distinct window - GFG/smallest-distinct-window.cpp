//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here   
        unordered_set<char> s;
        for(char i : str)
        s.insert(i);
        unordered_map<char,int> mp;
        int i=0,j=0,mi=INT_MAX;
        while(j<str.length())
        {
            mp[str[j]]++;
            if(mp.size()==s.size())
            {
                while(mp[str[i]]>1)
                {
                    mp[str[i]]--;
                    i++;
                }
            mi=min(mi,j-i+1);
            }
            j++;
        }
        // for(int i : s)
        // cout<<i<<" ";
        return mi;
    }
};

//{ Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}
// } Driver Code Ends