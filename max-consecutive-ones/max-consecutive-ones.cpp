class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count  = 0, sol = 0;
        for(int  i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0){
                count = 0;
            } 
             sol = max(sol, count);
        }
        
        return sol;
    }
};