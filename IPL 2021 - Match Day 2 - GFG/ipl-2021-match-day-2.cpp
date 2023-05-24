//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int> v;
        deque<int> deq;
        if(k>n)
        {
            for(int i : arr)
            {
                v.push_back(i);
            }
            return v;
        }
        int i=0,j=0;
        while(j<n)
        {
            while(deq.size()>0 && deq.back()<arr[j])
            {
                deq.pop_back();
            }
            deq.push_back(arr[j]);
            if(j-i+1<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                v.push_back(deq.front());
                if(deq.front()==arr[i])
                {
                    deq.pop_front();
                }
                i++;
                j++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends