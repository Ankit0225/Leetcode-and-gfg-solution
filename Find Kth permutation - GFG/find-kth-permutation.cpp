//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        vector<int> v;
        int fact = 1;
        for(int i=1;i<n;i++)
        {
            v.push_back(i);
            fact*=i;
        }
        v.push_back(n);
        k--;
        string ans="";
        while(true)
        {
            ans+=to_string(v[k/fact]);
            v.erase(v.begin() + k/fact);  
            if(v.size()==0)
            break;
            k%=fact;
            fact/=v.size();
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        string ans = ob.kthPermutation(n, k);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends