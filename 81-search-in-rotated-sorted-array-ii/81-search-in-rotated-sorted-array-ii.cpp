class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
                return true;
           else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
                
        }
        return false;
            
            
    }
};