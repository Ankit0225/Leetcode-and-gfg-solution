// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
       int d1=-1,d2=-1,mi=INT_MAX;
       for(int i=0;i<n;i++){
       if(a[i]==x)
        d1=i;
        if(a[i]==y)
        d2=i;
        if(d1!=-1 &&  d2!=-1)
        mi=min(mi,abs(d1-d2));
       }
      if(d1==-1 || d2==-1)
      return -1;
      return mi;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}
  // } Driver Code Ends