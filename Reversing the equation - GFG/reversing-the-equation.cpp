//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            //code here.
            string ans="";
            stack<char> st;
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*')
                {
                    string rev="";
                    while(!st.empty())
                    {
                        rev+=st.top();
                        st.pop();
                    }
                    // reverse(rev.begin(),rev.end());
                    ans+=rev;
                    ans+=s[i];
                }
                else
                {
                    st.push(s[i]);
                }
            }
            while(!st.empty())
            {
                ans+=st.top();
                st.pop();
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends