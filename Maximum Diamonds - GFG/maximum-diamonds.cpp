//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int maxDiamonds(int A[], int N, int K) {
        // code here
        int res=0;
        priority_queue<int> maxH;
        for(int i=0;i<N;i++)
        maxH.push(A[i]);
        
        while(K>0 && maxH.size()>0)
        {
            int top=maxH.top();
            maxH.pop();
            res+=top;
            top/=2;
            maxH.push(top);
            K--;
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends