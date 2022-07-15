// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        long long int sum1=0,sum2=0;
        sort(arr,arr+n);
        for(int i=0;i<n;i+=2)
           sum1=sum1*10+arr[i];
        for(int i=1;i<n;i+=2)
           sum2=sum2*10+arr[i];
       return sum1+ sum2;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minSum(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends