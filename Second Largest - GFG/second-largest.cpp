//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    set<int> s;
	    for(int i=0;i<n;i++)
	    s.insert(arr[i]);
	    vector<int> v;
	    for(auto i : s)
	    v.push_back(i);
	    reverse(v.begin(),v.end());
	    int size = v.size();
	    return v.size()>=2 ? v[1] : -1;
	}
};

//{ Driver Code Starts.

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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends