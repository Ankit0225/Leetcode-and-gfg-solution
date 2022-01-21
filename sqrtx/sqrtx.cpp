class Solution {
public:
   int mySqrt(int x) {
      int low =0, high =x, result =-1;
        while(low<=high){
         long long int mid = (low+high)/2;
            if(mid * mid == x)
                return mid;
            else if(mid*mid>x)
                high = mid-1;
            else{
                low=mid+1;
                result= mid;
            }
        }
        return result;
    }
};