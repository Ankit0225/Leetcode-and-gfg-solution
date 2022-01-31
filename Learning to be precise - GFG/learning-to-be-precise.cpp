// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

void precise(float a, float b)
{
    //perform a/b
    float c=a/b;
      cout<<fixed<<setprecision(5)<<c<<" "<<setprecision(3)<<c<<endl;
    // cout<</*output the result of a/b here*/<<" "<</*use setprecision(3) here*/<</*use fixed here*/<</*Output c here*/<<endl;
    
    cout<<endl;
}

// { Driver Code Starts.
void precise(float , float );//prototype

//Driver Code
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b;
	    cin>>a>>b; //Taking input of a and b in floating types
	    precise(a,b);
	    
	}
	return 0;
}  // } Driver Code Ends