// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int lastSeenElement(int arr[], int n)
    {
        // Complete the function
        unordered_map<int,int> mp;
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        mp[arr[i]]=i;
        for(int i=0;i<n;i++){
            res=min(res,mp[arr[i]]);
        }
        return arr[res];
    }
 
};

// { Driver Code Starts.

 
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    int n;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
    cin >> a[i];
    Solution ob;
    cout << ob.lastSeenElement(a, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends