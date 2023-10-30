//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int numofsubset(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        int val = arr[0],cnt=1;
        for(int i=1;i<n;i++)
        {
            if(val + 1 == arr[i])
            {
                val+=1;
                continue;
            }
            else
            {
                cnt++;
                val = arr[i];
            }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
// Driven Program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
        Solution ob;
	    cout << ob.numofsubset(arr, n) << endl;
	}
	return 0;
}

// } Driver Code Ends