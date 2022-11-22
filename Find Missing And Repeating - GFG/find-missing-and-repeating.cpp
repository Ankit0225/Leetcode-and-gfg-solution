//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *res = new int[2];
        unordered_map<int,int> mp;
        
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        int ans;
        for(auto i : mp)
        if(i.second==2)
        ans=i.first;
        
        res[0]=ans;
        
        int a =1 ;
        while(a<=n)
        {
            if(mp.find(a)==mp.end())
            {
                ans=a;
                break;
            }
            a++;
        }
        res[1]=ans;
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends