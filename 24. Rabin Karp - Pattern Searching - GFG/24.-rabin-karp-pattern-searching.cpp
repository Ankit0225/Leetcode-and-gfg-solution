// { Driver Code Starts
//Initial Template for C++

/* Following program is a C implementation of 
Rabin Karp. Algorithm given in the CLRS book */
#include<bits/stdc++.h>

using namespace std;

bool search(string, string, int);


 // } Driver Code Ends
//User function Template for C++

// d is the number of characters in the input alphabet 
#define d 256 

//Function to check if the pattern is present in string or not.
bool search(string pat, string txt, int q) 
{ 
	// Your code here
	int m=pat.length(),n=txt.length();
	int h=1;
	for(int i=0;i<m-1;i++)
	h=(h*d)%q;
	
	int p=0,t=0;
	for(int i=0;i<m;i++)
	{
	    p=(p*d+pat[i])%q;
	    t=(t*d+txt[i])%q;
	}
	
	for(int i=0;i<=n-m;i++)
	{
	    if(p==t)
	    {
	        int j;
	        for(j=0;j<m;j++)
	        if(pat[j]!=txt[i+j])
	        break;
	       
	        if(j==m)
	        return true;
	    }
	    if(i<n-m)
	    {
	        t=(d*(t-txt[i]*h)+txt[i+m])%q;
	        if(t<0)
	        t=t+q;
	    }
	}
	    return false;
} 

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
    int t;
    cin >> t;
    
    while(t--){
	    string s, p;
	    cin >> s >> p;
	    int q = 101; // A prime number 
	    if(search(p, s, q)) cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0; 
} 
  // } Driver Code Ends