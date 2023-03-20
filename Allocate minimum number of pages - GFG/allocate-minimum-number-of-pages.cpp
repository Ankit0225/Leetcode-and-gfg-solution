//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isValid(int A[],int N,int M, int mid)
    {
        int student=1,sum=0;
        for(int i=0;i<N;i++)
        {
        sum+=A[i];
            if(sum>mid)
            {
                student++;
                sum=A[i];
            }
        }
        return student<=M;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(N<M)
        return -1;
        int res=INT_MIN,sum=0;
        for(int i=0;i<N;i++)
        {
            res=max(res,A[i]);
            sum+=A[i];
        }
        int start=res,end=sum,ans=-1;
        while(start<=end)
        {
            int mid = start+(end-start)/2;
            if(isValid(A,N,M,mid)==true)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends