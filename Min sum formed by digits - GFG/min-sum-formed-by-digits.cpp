// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    long long int minSum(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n);
        priority_queue<int,vector<int>,greater<int>> minH1,minH2;
        for(int i=0;i<n;i+=2)
        minH1.push(arr[i]);
        for(int i=1;i<n;i+=2)
        minH2.push(arr[i]);
        long long int sum1= 0;
        long long int sum2= 0;
        while(minH1.size()>0){
        sum1= sum1*10 +minH1.top();
        minH1.pop();    
        }
        while(minH2.size()>0)
        {
        sum2= sum2*10+minH2.top();
        minH2.pop();    
        }
        return sum1+sum2;
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