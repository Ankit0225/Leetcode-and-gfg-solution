// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long> right;
        stack<pair<long long,long long>> st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.size()==0)
            right.push_back(n);
            else if(st.size()>0 && st.top().first<arr[i])
            right.push_back(st.top().second);
            else if(st.size()>0 && st.top().first>=arr[i])
            {
                while(st.size()>0 && st.top().first>=arr[i])
                st.pop();
                if(st.size()==0)
                right.push_back(n);
                else
                right.push_back(st.top().second);
            }
            st.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        
        vector<long long> left;
        stack<pair<long long,long long>> st2;
        for(int i=0;i<n;i++)
        {
            if(st2.size()==0)
            left.push_back(-1);
            else if(st2.size()>0 && st2.top().first<arr[i])
            left.push_back(st2.top().second);
            else if(st2.size()>0 && st2.top().first>=arr[i])
            {
                while(st2.size()>0 && st2.top().first>=arr[i])
                st2.pop();
                if(st2.size()==0)
                left.push_back(-1);
                else
                left.push_back(st2.top().second);
            }
            st2.push({arr[i],i});
        }
        
        vector<long long> v;
        for(int i=0;i<n;i++){
        v.push_back(right[i]-left[i]-1);
        }
        long long res=-1;
        for(int i=0;i<n;i++)
        {
        v[i]=v[i]*arr[i];
        res=max(res,v[i]);    
        }
        
        return res;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends