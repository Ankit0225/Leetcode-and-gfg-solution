// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int l=0,h=n-1,res=-1;
    while(l<=h){
        int m=(l+h)/2;
        if(arr[m]==1){
        res=m;
            h=m-1;
        }
        else
        l=m+1;
        
    }
    return res;
}