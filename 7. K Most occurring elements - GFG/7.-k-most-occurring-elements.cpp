// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
// Function to print the k numbers with most occurrences 

typedef pair<int, int> pi;
class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	// Your code here	
        priority_queue<int,vector<int>,greater<int>> minH;
    	unordered_map<int,int> mp;
    	for(int i=0;i<n;i++)
    	mp[arr[i]]++;
    
    	for(auto i : mp)
    	{
    	    minH.push(i.second);
    	    if(minH.size()>k)
    	    minH.pop();
    	}
    	int sum=0;
    	while(minH.size()>0)
    	{
    	    sum+=minH.top();
    	    minH.pop();
    	}
    	return sum;
    } 
};

// { Driver Code Starts.
// Driver program to test above 
int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
  // } Driver Code Ends