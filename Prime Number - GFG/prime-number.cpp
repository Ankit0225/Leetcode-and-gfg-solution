//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        int flag=0;
        if(N<=1)
        return 0;
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        return 1;
        else
        return 0;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends