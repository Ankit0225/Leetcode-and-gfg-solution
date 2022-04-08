// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int left[N],right[N],temp1=INT_MAX,temp2=INT_MIN;
        for(int i=0;i<N;i++)
        {
            temp1=min(temp1,A[i]);
            left[i]=temp1;
        }
        for(int i=N-1;i>=0;i--)
        {
            temp2=max(temp2,A[i]);
            right[i]=temp2;
        }
        int i=0,j=N-1,mx=0;
        while(i<=j)
        {
            if(left[i]<=right[j]){
            mx=max(mx,j-i);
            j=N-1;
            i++;
            }
            else
            j--;
            
            
            
        }
        return mx;
    }
};

// { Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
}   // } Driver Code Ends