// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}
// } Driver Code Ends


int maxlength( string s)
{
// your code here
int count=0,res=0;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='1')
    {
    count++;
    res=max(res,count);
    }
    else
    count=0;
}
return res;
}