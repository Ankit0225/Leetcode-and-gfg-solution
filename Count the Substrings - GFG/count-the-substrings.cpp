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
        int count=0;
        for(int i=0;i<S.length();i++)
        {
            int lcnt=0,upcnt=0;
            for(int j=i;j<S.length();j++)
            {
                if(islower(S[j]))
                lcnt++;
                if(isupper(S[j]))
                upcnt++;
                if(lcnt==upcnt)
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