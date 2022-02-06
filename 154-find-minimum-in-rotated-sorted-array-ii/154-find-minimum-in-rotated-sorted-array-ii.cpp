class Solution {
public:
    int findMin(vector<int>& nums) {
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++)
            res=min(res,nums[i]);
        return res;
    }
};