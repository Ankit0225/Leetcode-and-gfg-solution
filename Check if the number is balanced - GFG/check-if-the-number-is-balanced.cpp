// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool balancedNumber(string N)
	{
	    // code here
	    int sum1=0,sum2=0;
	    for(int i=0;i<N.length()/2;i++)
	    sum1+=N[i];
	    for(int i=N.length()/2+1;i<N.length();i++)
	    sum2+=N[i];
	    if(sum1==sum2)
	    return true;
	    else
	    return false;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string N;
        cin>>N;
        Solution ob;
        cout<<ob.balancedNumber(N)<<endl;
    }
    return 0;
}
  // } Driver Code Ends