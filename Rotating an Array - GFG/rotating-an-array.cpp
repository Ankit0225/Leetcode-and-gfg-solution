// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
        // code here
        int temp[n];
        for(int i=d;i<n;i++)
        temp[i-d]=arr[i];
        for(int i=0;i<d;i++)
        temp[n-d+i]=arr[i];
        for(int i=0;i<n;i++)
        arr[i]=temp[i];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}


  // } Driver Code Ends