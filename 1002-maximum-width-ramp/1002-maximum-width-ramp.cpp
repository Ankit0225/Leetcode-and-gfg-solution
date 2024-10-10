class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        vector<int> right_max(n,0);
        right_max[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--)
            right_max[i] = max(right_max[i+1],nums[i]);
        
        int i=0,j=1,res = 0;
        while(j<n)
        {
            if(i < j && nums[i]<=right_max[j])
                res = max(res,j-i);
            while(nums[i]>right_max[j])
                i++;
            j++;
        }
        return res;
    }
};