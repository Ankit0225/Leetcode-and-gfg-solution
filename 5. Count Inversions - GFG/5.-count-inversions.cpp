// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long low, long long mid, long long high)
    {
        long long n1=mid-low+1,n2=high-mid;
        long long left[n1],right[n2];
        for(int i=0;i<n1;i++)
        left[i]=arr[i+low];
        for(int j=0;j<n2;j++)
        right[j]=arr[mid+1+j];
        long long i=0,j=0,k=low,res=0;
        while(i<n1 && j<n2){
            if(left[i]<=right[j]){
                arr[k++]=left[i++];
                // i++;
            }
            else{
             arr[k++]=right[j++];
            //  j++;
             res+=n1-i;
            }
            // k++;
        }
        while(i<n1){
            arr[k++]=left[i++];
            // i++;
            // k++;
        }
        while(j<n2){
            arr[k++]=right[j++];
            // j++;
            // k++;
        }
        return res;
    }
    long long int Mergesort(long long arr[], long long low, long long high)
    {
        long long res=0;
        if(low<high){
            long long mid=low+(high-low)/2;
            res+= Mergesort(arr,low,mid);
            res+= Mergesort(arr,mid+1,high);
            res+= merge(arr,low,mid,high);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
    return Mergesort(arr,0,N-1);

    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends