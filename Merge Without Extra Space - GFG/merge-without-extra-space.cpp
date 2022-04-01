// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int ans[m+n];
	    int i=0,j=0,k=0;
	    while(i<n && j<m)
	    {
	        if(arr1[i]<=arr2[j]){
	        ans[k++]=arr1[i++];
	        }
	        if(arr1[i]>arr2[j])
	        ans[k++]=arr2[j++];
	        
	    }
	    while(i<n)
	    {
	        ans[k++]=arr1[i++];
	    }
	    while(j<m)
	    {
	        ans[k++]=arr2[j++];
	    }
	    for(int i=0;i<n;i++)
	    arr1[i]=ans[i];
	    for(int i=0;i<m;i++)
	    arr2[i]=ans[n+i];
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends