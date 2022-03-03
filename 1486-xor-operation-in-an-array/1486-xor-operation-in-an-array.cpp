class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        for(int i=0;i<n;i++)
            arr[i]=start+2*i;
        int sum=0;
        for(int i=0;i<n;i++)
            sum^=arr[i];
        return sum;
    }
};