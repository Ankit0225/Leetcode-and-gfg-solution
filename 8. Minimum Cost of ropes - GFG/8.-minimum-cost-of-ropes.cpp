// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue<long long,vector<long long> ,greater<long long>> minH;
        long long sum=0;
        for(long long i=0;i<n;i++)
        minH.push(arr[i]);
        while(minH.size()>1)
        {
            long long ele1=minH.top();
            minH.pop();
            long long ele2=minH.top();
            minH.pop();
            long long ans=ele1+ele2;
            sum+=ans;
            minH.push(ans);
        }
        return sum;
    }
};


// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends