// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        int n;
        if(C!=0)
        n=abs((B-A)/C)+1;
        if(A+(n-1)*C==B)
        return 1;
        else
        return 0;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin>>A>>B>>C;
        
        Solution ob;
        cout<<ob.inSequence(A, B, C)<<endl;
    }
    return 0;
}  // } Driver Code Ends