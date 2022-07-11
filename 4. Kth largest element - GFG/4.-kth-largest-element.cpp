// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        // Your code here
        priority_queue<int,vector<int>,greater<int>> minH;
        for(int i=0;i<n;i++)
        {
            minH.push(arr[i]);
            if(minH.size()>k)
            minH.pop();
        }
        return minH.top();
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.KthLargest(arr, n, k) << endl;
    }

    return 0;
}  // } Driver Code Ends