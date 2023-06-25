//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
# define pb push_back
class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        // code here
        int fact=1;
        vector<int> nums;
        for(int i=1;i<n;i++)
        {
            nums.pb(i);
            fact*=i;
        }
        nums.pb(n);
        string ans="";
        k--;
        while(true)
        {
            ans+=to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0)
            break;
            k=k%fact;
            fact/=nums.size();
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