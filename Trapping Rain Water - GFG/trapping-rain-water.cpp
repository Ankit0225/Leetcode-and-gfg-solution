// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int maxL[n];
        int maxR[n];
        maxL[0]=arr[0];
        maxR[n-1]=arr[n-1];
        for(long long i=1;i<n;i++)
        maxL[i]=max(maxL[i-1],arr[i]);
        for(long long i=n-2;i>=0;i--)
        maxR[i]=max(maxR[i+1],arr[i]);
        long long water[n];
        for(long long i=0;i<n;i++)
        water[i]=min(maxL[i],maxR[i])-arr[i];
        long long sum=0;
        for(long long i=0;i<n;i++)
        sum+=water[i];
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends