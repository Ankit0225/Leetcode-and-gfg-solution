// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int ans=0,sum=0,res=0;
    while(ans!=N)
    {
        ans++;
        sum+=ans;
    }
    for(int i=0;i<N-1;i++)
    res+=A[i];
    
    return abs(sum-res);
}