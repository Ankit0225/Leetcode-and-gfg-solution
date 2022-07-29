class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxH;
        int n=nums.size(),sum;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=(nums[i]-1)*(nums[j]-1);
                maxH.push(sum);
            }
        }
        return maxH.top();
    }
};