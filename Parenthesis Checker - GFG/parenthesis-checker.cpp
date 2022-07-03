// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matching(char a ,char b)
{
    return((a=='[' && b ==']')
    ||     (a=='(' && b==')') 
    ||     (a=='{' && b=='}'));
}
bool ispar(string s)
{
    stack<char> st;
    // code here
    for(char x : s)
    {
        if(x=='[' || x=='{' || x=='(')
        st.push(x);
        else
        {
            if(st.empty())
            return false;
            if(matching(st.top(),x))
            st.pop();
            else
            return 0;
        }
    }
    return(st.empty()==true);
}

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends