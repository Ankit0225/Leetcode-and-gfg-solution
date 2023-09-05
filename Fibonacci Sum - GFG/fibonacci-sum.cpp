//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N){
        //code here
        if(N==0)
        return 0;
        long long int ans = 0,curr,prev2 = 0,prev=1,mod = 1e9 + 7;
        
        for(long long int i=2;i<=N;i++)
        {
            curr = ((prev2 % mod) + (prev % mod)) % mod;
            ans = ((ans % mod) + (curr % mod)) % mod;
            prev2 = prev % mod;
            prev = curr % mod;
        }
        return (ans + 1) % mod;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends