class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int a,c=0;
            while(nums[i]!=0){
                a=nums[i]%10;
                c++;
                nums[i]/=10;
            }
            if(c%2==0)
                sum++;
        }
        return sum;
    }
};