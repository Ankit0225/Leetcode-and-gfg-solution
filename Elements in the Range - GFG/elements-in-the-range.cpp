// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
	bool check_elements(int arr[], int n, int A, int B)
	{
		// Your code goes here
		unordered_map<int,int> mp;
		for(int i=0;i<n;i++)
		mp[arr[i]]++;
		int ele=abs(A-B)+1,count=0;
		for(auto i : mp)
		if(i.first>=A && i.first<=B)
		count++;
		return (count==ele);
	}


		 

};
	

// { Driver Code Starts.


int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,A,B;
		cin>>n>>A>>B;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];

        

        Solution ob;
        if (ob.check_elements(a, n, A, B))
			cout << "Yes";
		else
			cout << "No";
	    
        
	    cout << "\n";
	     
    }
    return 0;
}






  // } Driver Code Ends