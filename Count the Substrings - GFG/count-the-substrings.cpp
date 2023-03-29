//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countSubstring(string S)
    {
        // code here
        int count=0,N=S.length();
        for(int i=0;i<N;i++)
        {
            int lowercount=0,uppercount=0;
            for(int j=i;j<N;j++)
            {    
                if(islower(S[j]))
                lowercount++;
                else
                uppercount++;
                if(lowercount==uppercount)
                count++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
        cout<<obj.countSubstring(S)<<endl;
    }
}  
// } Driver Code Ends