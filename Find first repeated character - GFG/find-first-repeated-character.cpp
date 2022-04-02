// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    int arr[26]={0};
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
        if(arr[s[i]-'a']>1){
        ans+=s[i];
         return ans;
        }
    }
    return "-1";
}