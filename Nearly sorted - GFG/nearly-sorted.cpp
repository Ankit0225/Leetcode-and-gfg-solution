// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        // Your code here
        vector<int> v;
        priority_queue<int,vector<int>,greater<int>> minH;
        for(int i=0;i<num;i++)
        {
            minH.push(arr[i]);
            if(minH.size()>K)
            {
                while(minH.size()!=K)
                {
                    v.push_back(minH.top());
                    minH.pop();
                }
            }
        }
        while(minH.size()>0)
        {
            v.push_back(minH.top());
            minH.pop();
        }
        return v;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends