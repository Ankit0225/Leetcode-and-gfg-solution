// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    vector<int> v;
	    vector<int> ans;
	    for(int i=0;i<n;i++)
	    v.push_back(arr[i]);
	    sort(v.begin(),v.end());
	    for(int i=0;i<n;i++){
	    if(v[i]!=arr[i])
	    {
	    ans.push_back(i);
	     break;     
	    }
	    }
	    for(int i=n-1;i>=0;i--)
	    {
	        if(v[i]!=arr[i])
	        {
	        ans.push_back(i);
	            break;
	        }
	    }
	    if(ans.size()==0)
	    {
	        ans.push_back(0);
	        ans.push_back(0);
	    }
	    return ans;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends