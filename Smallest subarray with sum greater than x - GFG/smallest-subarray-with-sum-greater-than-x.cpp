//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here  
        int len=INT_MAX,sum=0,i=0,j=0;
        while(j<n)
        {
            sum+=arr[j];
            if(sum<x)
            {
                j++;
            }
            else if(sum==x)
            {
                len = min(len,j-i+1);
                j++;
            }
            else if(sum>x)
            {
                while(sum>x)
                {
                    if(sum>x)
                    {
                        len=min(len,j-i+1);
                    }
                    sum-=arr[i];
                    i++;
                }
                 if(sum>x)
                {
                    len=min(len,j-i+1);
                }
                j++;
            }
        }
        return len;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}
// } Driver Code Ends