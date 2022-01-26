// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find the median of the two arrays when they get merged.
    int findMedian(int arr[], int n, int brr[], int m)
    {
        // code here
        int temp[n+m];
        for(int i=0;i<n;i++)
        temp[i]=arr[i];
        for(int j=0;j<m;j++)
        temp[n+j]=brr[j];
        sort(temp,temp+n+m);
        int low=0,high=m+n-1;
        int mid=(low+high)/2;
        if((n+m)%2!=0){
            int mid = (low+high)/2;
            return temp[mid];
        }
        else{
            int mid1 = (0 + (n+m))/2;
            return ((temp[mid1]+temp[mid1-1])/2);
        }
    return 0;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int n, m;
	    cin >> n >> m;
	    int arr[n];
	    int brr[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> brr[i];
	    }
	    Solution obj;
	    if(n < m)
	        cout << obj.findMedian(arr, n, brr, m) << endl;
	   else
	        cout << obj.findMedian(brr, m, arr, n) << endl;
	    
	}

}  // } Driver Code Ends