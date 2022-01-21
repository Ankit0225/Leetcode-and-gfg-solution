// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
       long long int low  = 0 ,high = x, max =-1;
        while(low<=high){
         long long int mid = (low+high)/2;
            if(mid*mid==x)
            return mid;
            else if(mid*mid>x)
            high = mid-1;
            else{
            low = mid+1;
            max=mid;
            }
        }
        return max;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends