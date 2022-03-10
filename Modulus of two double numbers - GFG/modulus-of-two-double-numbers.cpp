// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution {
  public:
    double floatMod(double a, double b) {
        // code here
       return  fmod(a,b);

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        double a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.floatMod(a,b) << endl;
    }
    return 0;
}  // } Driver Code Ends