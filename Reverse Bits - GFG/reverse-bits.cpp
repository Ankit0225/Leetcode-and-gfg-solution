//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    unsigned int reverseBits(unsigned int n)
    {
        //code here
        string ans = "";
        while(n>0)
        {
            if(n%2==1)
            ans+='1';
            else
            ans+='0';
            n/=2;
        }
        reverse(ans.begin(),ans.end());
        
        unsigned int res = 0;
        for(int i=0;i<ans.length();i++)
            if(ans[i]=='1')
                res += pow(2,i);
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout<< ob.reverseBits(N) <<"\n";
        
    }
    return 0;
}

// } Driver Code Ends