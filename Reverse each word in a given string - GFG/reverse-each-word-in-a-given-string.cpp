// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string ans;
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9')
            {
                st.push(s[i]);
            }
            else if(s[i]=='.')
            {
                while(st.empty()==false)
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back(s[i]);
            }
        }
            while(st.empty()==false)
            {
                ans.push_back(st.top());
                st.pop();
            }
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
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends