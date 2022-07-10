// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack<char> s;
        string ans;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]>='a' && S[i]<='z' || S[i]>='A' && S[i]<='Z' || S[i]>='0' && S[i]<='9')
            s.push(S[i]);
            if(S[i]=='.')
            {
                while(s.empty()==false)
                {
                    ans.push_back(s.top());
                    s.pop();    
                }
                ans.push_back(S[i]);
            }
        }
        while(s.empty()==false)
        {
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends