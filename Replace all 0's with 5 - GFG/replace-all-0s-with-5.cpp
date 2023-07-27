//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int revn=0;
    while(n>0)
    {
        int digit = n%10;
        if(digit==0)
        digit=5;
        revn = revn*10 + digit;
        n/=10;
    }
    while(revn>0)
    {
        n = n * 10 + revn%10;
        revn/=10;
    }
    return n;
}