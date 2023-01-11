//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        int res=0;
        priority_queue<int,vector<int>,greater<int>> minH;
        for(int i=0;i<N;i++)
        minH.push(arr[i]);
        while(minH.size()>1)
        {
            int sum1=minH.top();
            minH.pop();
            int sum2=minH.top();
            minH.pop();
            int sum=sum1+sum2;
            res+=sum;
            minH.push(sum);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends