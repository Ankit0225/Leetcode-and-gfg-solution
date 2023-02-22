//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void TimeComplexity(int n) {
        // Code here
       if(n==1)
       cout<<"logn"<<endl;
       else if(n==2)
       cout<<"nlogn"<<endl;
       else if(n==3 || n==4)
       cout<<"n^2"<<endl;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        obj.TimeComplexity(n);
    }
    return 0;
}
// } Driver Code Ends