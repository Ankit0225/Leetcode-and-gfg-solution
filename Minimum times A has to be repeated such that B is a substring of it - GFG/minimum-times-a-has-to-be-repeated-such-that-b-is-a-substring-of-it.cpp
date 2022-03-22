// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string A, string B) {
        // code here
        string str=A;
        int count=1;
        while(A.size()<B.size())
        {
            A+=str;
            count++;
        }
        if(A.find(B)!=-1)
        return count;
        A+=str;
        count++;
        if(A.find(B)!=-1)
        return count;
        return -1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}  // } Driver Code Ends