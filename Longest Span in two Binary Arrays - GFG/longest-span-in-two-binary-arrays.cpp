// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    int longestCommonSum(bool arr1[], bool arr2[], int n) {
            // code here 
            int arr[n];
            for(int i=0;i<n;i++)
            arr[i]=arr1[i]-arr2[i];
            int prefix_sum=0,ans=0;
            unordered_map<int,int> mp;
            for(int i=0;i<n;i++)
            {
                prefix_sum+=arr[i];
                if(prefix_sum==0)
                ans=i+1;
                if(mp.find(prefix_sum)!=mp.end())
                ans=max(ans,i-mp[prefix_sum]);
                else
                mp[prefix_sum]=i;
            }
            return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        bool arr1[n], arr2[n];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        auto ans = ob.longestCommonSum(arr1, arr2, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends