//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        reverse(arr.begin(),arr.end());
        int carry=1;
        for(int i=0;i<N;i++)
        {
            int sum = carry + arr[i];
            carry=sum/10;
            arr[i]=sum%10;
        }
        if(carry==1)
        {
            arr.push_back(carry);
        }
        reverse(arr.begin(),arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends