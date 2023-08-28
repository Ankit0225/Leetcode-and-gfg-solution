//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry = 0;
    int i = n-1,j = m-1;
    string res="";
    while(i>=0 && j>=0)
    {
        int sum = a[i] + b[j] + carry;
        if(sum>=10)
        {
            carry = sum/10;
            sum=sum%10;
        }
        else
        {
            carry=0;
        }
        res += to_string(sum);
        i--;
        j--;
    }
    while(i>=0)
    {
         
        int sum = a[i] + carry;
        if(sum>=10)
        {
            carry = sum/10;
            sum=sum%10;
        }
        else
        {
            carry=0;
        }
        
        res += to_string(sum);
        i--;
    }
    while(j>=0)
    {
        
        int sum = b[j] + carry;
        if(sum>=10)
        {
            carry = sum/10;
            sum=sum%10;
        }
        else
        {
            carry=0;
        }
        res += to_string(sum);
        j--;
    }
    if(carry>=1)
    res+=to_string(carry);
    
    reverse(res.begin(),res.end());
    if(res[0] == '0')
    return res.substr(1,res.size());
    return res;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int m;
	    cin>>m;
	    int b[m];
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	    }
	    Solution ob;
	    cout << ob.calc_Sum(a,n,b,m) << endl;
	}
	return 0;
}
// } Driver Code Ends